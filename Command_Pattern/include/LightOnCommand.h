#ifndef _LightOnCommand_H
#define _LightOnCommand_H

#include "Command.h"
#include "Light.h"

class LightOnCommand : public Command
{
    public:
        LightOnCommand( Light* lightObject );
        void execute();

    private:
        Light* light;
};

#endif
