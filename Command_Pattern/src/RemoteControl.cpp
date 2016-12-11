
#include "../include/RemoteControl.h"


RemoteControl::RemoteControl( int initialSlotSize )
{
    slots.reserve( SLOT_SIZE );
}

void RemoteControl::setSlot( Command* command, int slot )
{
    slots[slot] = command;
}

void RemoteControl::buttonWasPressed( int slot )
{
    slots[slot]->execute();
}
