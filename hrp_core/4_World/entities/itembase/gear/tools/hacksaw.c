//
// Last edited by Kermit on 21-9-2021.
//

modded class Hacksaw extends ToolBase
{
    override void SetActions()
    {
        super.SetActions();

        AddAction(ActionDestroyCombinationLock);
        AddAction(ActionDestroyPart);
    }
};