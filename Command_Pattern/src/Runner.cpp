

#include "../include/RemoteControl.h"


int main()
{
    Light* light = new Light;
    LightOffCommand* lightoff = new LightOffCommand( light );
    LightOnCommand* lighton = new LightOnCommand( light );

    RemoteControl* remoteControl = new RemoteControl( 7 );

    remoteControl->setSlot( lightoff, 0 );
    remoteControl->setSlot( lighton, 1 );
    remoteControl->buttonWasPressed( 0 );
    remoteControl->buttonWasPressed( 1 );
    return 0;
}
