//
// Last edited by Kermit on 21-9-2021.
//

modded class ActionDestroyPart : ActionContinuousBase
{
    override void OnFinishProgressServer( ActionData action_data )
    {
        BaseBuildingBase base_building = BaseBuildingBase.Cast(action_data.m_Target.GetObject());
        Construction construction = base_building.GetConstruction();
        ConstructionActionData construction_action_data = action_data.m_Player.GetConstructionActionData();
        ConstructionPart construction_part = construction_action_data.GetTargetPart();

        if (construction.CanDestroyPart(construction_part.GetPartName()))
        {
            construction.DestroyPartServer( action_data.m_Player, construction_part.GetPartName(), AT_DESTROY_PART );
            // Destroy the tool used
            action_data.m_MainItem.DecreaseHealth( action_data.m_MainItem.GetMaxHealth() * 0.34, false );
        }
    }
};