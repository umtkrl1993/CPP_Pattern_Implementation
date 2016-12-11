

#include "../include/RemoteControl.h"


int main()
{
	Light* light = new Light;
	LightOffCommand* lightoff = new LightOffCommand( light );

	RemoteControl* remoteControl = new RemoteControl( 7 );

	remoteControl->setSlot( lightoff, 0 );
	remoteControl->buttonWasPressed( 0 );
	return 0;
}
