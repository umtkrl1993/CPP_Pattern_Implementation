#include "../include/LightOffCommand.h"


LightOffCommand::LightOffCommand( Light* lightObject )
{
    light = lightObject;
}


void LightOffCommand::execute()
{
    light->turnOffLight();
}
