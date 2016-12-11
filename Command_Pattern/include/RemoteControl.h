#ifndef _RemoteControl_H
#define _RemoteControl_H

#define SLOT_SIZE 7
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include <vector>
class RemoteControl
{
	public:
        RemoteControl( int initialSlotSize );
        void setSlot( Command* command, int slot );
        void buttonWasPressed( int slot );

	private:
        std::vector<Command*> slots;


};

#endif
