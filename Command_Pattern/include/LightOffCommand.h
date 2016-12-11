#ifndef _LightOffCommand_H
#define _LightOffCommand_H

#include "Command.h"
#include "Light.h"

class LightOffCommand : public Command
{
	public:
		LightOffCommand( Light* lightObject );

	protected:
		void execute();

	private:
		Light* light;
};


#endif
