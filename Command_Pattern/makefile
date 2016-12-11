
LIB_BIN= ../bin
INCLUDE_PATH=-I ../include/
SRC_PATH=src/
cc=g++ -c $(INCLUDE_PATH)

RunnerObject : LightObject LightOffCommandObject LightOnCommandObject RemoteControlObject
		cd bin; \
		g++ ../src/Runner.cpp $(INCLUDE_PATH) Light.o LightOffCommand.o RemoteControl.o LightOnCommand.o -o Runner.o; \ 
		echo " Runner executable was created successfully "; \
		cd -; 
	
	
LightObject : $(SRC_PATH)Light.cpp include/Light.h
		cd $(SRC_PATH); \
		echo " Entered directory $(SRC_PATH) for light object "; \
		echo " Creating Light.o file "; \
		$(cc) Light.cpp -o $(LIB_BIN)/Light.o; \
		cd -; \

LightOffCommandObject : include/LightOffCommand.h
		cd $(SRC_PATH); \
		echo " Entered directory $(SRC_PATH) for light off command "; \
		echo " Creating LightOffCommand.o file "; \
		$(cc) LightOffCommand.cpp -o $(LIB_BIN)/LightOffCommand.o; \
		cd -; \
		
LightOnCommandObject : include/LightOnCommand.h
		cd $(SRC_PATH); \
		echo " Entered directory $(SRC_PATH) for light on command "; \
		echo " Creating LightOnCommand.o file "; \
		$(cc) LightOnCommand.cpp -o $(LIB_BIN)/LightOnCommand.o; \
		cd -; \
		
RemoteControlObject : include/RemoteControl.h
		cd $(SRC_PATH); \
		echo " Entered directory $(SRC_PATH) for remote control "; \
		echo " Creating RemoteControl.o file "; \
		$(cc) RemoteControl.cpp -o $(LIB_BIN)/RemoteControl.o; \
		cd -; \
		
clearLightObject:
		cd bin; \
		echo " Entering directory bin "; \
		echo " Removing Light.o file "; \
		rm Light.o; \

clearLightOffCommandObject:
		cd bin; \
		echo " Entering directory bin "; \
		echo " Removing LightOffCommand.o file "; \
		rm LightOffCommand.o; \
		
clearAll:
		cd bin;
		echo " Entering directory bin "; \
		echo " Removing all the object files "; \
		rm -rf *.o; \