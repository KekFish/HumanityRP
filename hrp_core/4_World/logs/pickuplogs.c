/*modded class ActionTakeItemToHands
{

	ref hrp_item_data hrp_discord_data_c = new hrp_item_data();

	override void OnExecute( ActionData action_data )
	{
		if ( GetGame().IsMultiplayer() && GetGame().IsServer() )
			return;
	
		ItemBase ntarget = ItemBase.Cast(action_data.m_Target.GetObject());
		ClearInventoryReservationEx(action_data);
		
		float stackable = ntarget.GetTargetQuantityMax(-1);
		
		if ( stackable == 0 || stackable >= ntarget.GetQuantity() )
		{
			action_data.m_Player.PredictiveTakeEntityToHands( ntarget );
			
		}
		else
		{
			InventoryLocation il = new InventoryLocation;
			il.SetHands(action_data.m_Player, ntarget);
			ntarget.SplitIntoStackMaxToInventoryLocationClient( il );
            
		}
			hrp_discord_data_c.itemek = ntarget.GetType();
			hrp_discord_data_c.type = "ToHands";
			hrp_discord_data_c.playerpos = action_data.m_Player.GetPosition();
			hrp_discord_data_c.posX = hrp_discord_data_c.playerpos[0].ToString();
			hrp_discord_data_c.posZ = hrp_discord_data_c.playerpos[2].ToString();
            GetRPCManager().SendRPC("HumanityRP", "Hrp_ReciveDiscordData", new Param1<hrp_item_data>(hrp_discord_data_c));
	}

}

modded class ActionDropItem
{

	ref hrp_item_data hrp_discord_data_c = new hrp_item_data();

	override void PhysicalDropItem( ActionData action_data )
	{

		
		super.PhysicalDropItem(action_data);

		hrp_discord_data_c.itemek = action_data.m_Player.GetItemInHands().GetType();
		hrp_discord_data_c.playerpos = action_data.m_Player.GetPosition();
		hrp_discord_data_c.posX = hrp_discord_data_c.playerpos[0].ToString();
		hrp_discord_data_c.posZ = hrp_discord_data_c.playerpos[2].ToString();
		hrp_discord_data_c.type = "ToGround";
		GetRPCManager().SendRPC("HumanityRP", "Hrp_ReciveDiscordData", new Param1<hrp_item_data>(hrp_discord_data_c));
	}


}

modded class ActionTakeItem
{

ref hrp_item_data hrp_discord_data_c = new hrp_item_data();
	override void OnExecuteClient( ActionData action_data )
	{

		ItemBase ntarget = ItemBase.Cast(action_data.m_Target.GetObject());
		InventoryLocation il = action_data.m_ReservedInventoryLocations.Get(0);
		InventoryLocation targetInventoryLocation = new InventoryLocation;
		ntarget.GetInventory().GetCurrentInventoryLocation(targetInventoryLocation);
		
		//SplitItemUtils.TakeOrSplitToInventoryLocation( action_data.m_Player, il );
		//action_data.m_Player.PredictiveTakeToDst(targetInventoryLocation, il);
		float stackable = ntarget.GetTargetQuantityMax(il.GetSlot());
		
		if( stackable == 0 || stackable >= ntarget.GetQuantity() )
		{
			action_data.m_Player.PredictiveTakeToDst(targetInventoryLocation, il);
		}
		else
		{
			ntarget.SplitIntoStackMaxToInventoryLocationClient( il );
		}


		hrp_discord_data_c.itemek = ntarget.GetType();
		hrp_discord_data_c.type = "ToHands";
		hrp_discord_data_c.playerpos = action_data.m_Player.GetPosition();
		hrp_discord_data_c.posX = hrp_discord_data_c.playerpos[0].ToString();
		hrp_discord_data_c.posZ = hrp_discord_data_c.playerpos[2].ToString();
		GetRPCManager().SendRPC("HumanityRP", "Hrp_ReciveDiscordData", new Param1<hrp_item_data>(hrp_discord_data_c));


	}

}

modded class ItemBase
{
	string discordWebhookURL;
	ref hrp_discord_message hrp_discord_message_s = new hrp_discord_message();
	ref JsonSerializer jsonSerializer = new JsonSerializer();
	string discordMessageJSON;
	ref hrp_item_data hrp_discord_data_c = new hrp_item_data();


	override void OnInventoryEnter(Man player)
	{
		
		PlayerBase nplayer;
		if ( PlayerBase.CastTo(nplayer, player) )
		{
			//nplayer.OnItemInventoryEnter(this);
			nplayer.SetEnableQuickBarEntityShortcut(this,true);	
			hrp_discord_data_c.itemek = this.GetType();
			hrp_discord_data_c.type = "ToInventory";
			hrp_discord_data_c.playerpos = nplayer.GetPosition();
			hrp_discord_data_c.posX = hrp_discord_data_c.playerpos[0].ToString();
			hrp_discord_data_c.posZ = hrp_discord_data_c.playerpos[2].ToString();
			ref PlayerIdentity Identity  = player.GetIdentity();
			if (!Identity) return;
			string senderName = Identity.GetName();
			if (!senderName) return;
			string senderId = Identity.GetPlainId();
			if (!senderId) return;
			hrp_discord_message_s.username = "Pan Podpierdolka";
			hrp_discord_message_s.content = senderName + " (" + senderId + ") Podniósł : " + hrp_discord_data_c.itemek + " na pozycji : X = " + hrp_discord_data_c.posX + " Z = " + hrp_discord_data_c.posZ;
			jsonSerializer.WriteToString(hrp_discord_message_s, false, discordMessageJSON);
			discordWebhookURL = GetDayZGame().ReadServerConfig().hrp_webhook_logs_items;
			Hrp_SendDiscordWebhook(discordMessageJSON, discordWebhookURL);
		}
	}
	
	void Hrp_SendDiscordWebhook(string JSONMessage, string WebhookURL)
	{

	WebhookURL.Replace("https://discord.com/api/webhooks/", "");
	private RestApi restAPI;
	private RestContext restContext;
	restAPI = CreateRestApi();
	restContext = restAPI.GetRestContext("https://discord.com/api/webhooks/");
	restContext.SetHeader("application/json");
	restContext.POST(NULL, WebhookURL, JSONMessage);

	}

	// -------------------------------------------------------------------------
	//! Event called on item when it is removed from the player(Man) inventory, passes the old owner as a parameter
	override void OnInventoryExit(Man player)
	{
		PlayerBase nplayer;
		if ( PlayerBase.CastTo(nplayer,player) )
		{		
			//nplayer.OnItemInventoryExit(this);
			nplayer.SetEnableQuickBarEntityShortcut(this,false);
			hrp_discord_data_c.itemek = this.GetType();
			hrp_discord_data_c.type = "FromInventory";
			hrp_discord_data_c.playerpos = nplayer.GetPosition();
			hrp_discord_data_c.posX = hrp_discord_data_c.playerpos[0].ToString();
			hrp_discord_data_c.posZ = hrp_discord_data_c.playerpos[2].ToString();
			ref PlayerIdentity Identity  = player.GetIdentity();
			if (!Identity) return;
			string senderName = Identity.GetName();
			if (!senderName) return;
			string senderId = Identity.GetPlainId();
			if (!senderId) return;
			hrp_discord_message_s.username = "Pan Podpierdolka";
			hrp_discord_message_s.content = senderName + " (" + senderId + ") Wyrzucił : " + hrp_discord_data_c.itemek + " na pozycji : X = " + hrp_discord_data_c.posX + " Z = " + hrp_discord_data_c.posZ;
			jsonSerializer.WriteToString(hrp_discord_message_s, false, discordMessageJSON);
			discordWebhookURL = GetDayZGame().ReadServerConfig().hrp_webhook_logs_items;
			Hrp_SendDiscordWebhook(discordMessageJSON, discordWebhookURL);
			
			
		}
		
		//if(!GetGame().IsDedicatedServer())
		player.GetHumanInventory().ClearUserReservedLocationForContainer(this);
		
		
		if ( HasEnergyManager() )
		{
			GetCompEM().UpdatePlugState(); // Unplug the el. device if it's necesarry.
		}
	}



}

class hrp_item_data
{

	string type;
	string itemek;
	vector playerpos;
	string posX;
	string posZ;

}

class hrp_discord_message
{
	string username;
    string content;
	
}

