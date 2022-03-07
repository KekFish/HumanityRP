//
// Last edited by Kermit on 21-9-2021.
//

modded class ActionDestroyCombinationLockCB : ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        m_ActionData.m_ActionComponent = new CAContinuousRepeat( UATimeSpent.CUSTOM_DESTROY_LOCKS );
    }
};

modded class ActionDestroyCombinationLock: ActionContinuousBase
    {
    override void OnFinishProgressServer( ActionData action_data )
    {
        Fence fence = Fence.Cast( action_data.m_Target.GetObject() );
        if ( fence )
        {
            CombinationLock combination_lock = fence.GetCombinationLock();
            if ( combination_lock )
            {
                // Damage combination lock in 5 cycles
                combination_lock.AddHealth("","",-(combination_lock.GetMaxHealth("","")/CYCLES));

                if ( combination_lock.IsDamageDestroyed() )
                {
                    // Unlock fence and destroy combination lock
                    combination_lock.UnlockServer( action_data.m_Player, fence );
                    GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( combination_lock.DestroyLock, 200, false );
                }
            }
        }
        // Damage the tool used
        action_data.m_MainItem.DecreaseHealth( action_data.m_MainItem.GetMaxHealth() * 0.34, false );

        // Add soft skill
        action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
    }
};