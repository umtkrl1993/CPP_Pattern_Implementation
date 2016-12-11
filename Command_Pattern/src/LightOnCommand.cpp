
#include "../include/LightOnCommand.h"


LightOnCommand :: LightOnCommand( Light* lightObject )
{
    light = lightObject;
}

void LightOnCommand :: execute()
{
    light->turnOnLight();
}
