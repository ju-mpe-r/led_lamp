#include <stdint.h>
#ifndef Cmd_Structure_Guard
#define Cmd_Structure_Guard
	typedef struct _CmdData
	{
		uint8_t r;
		uint8_t g;
		uint8_t b;
	} CmdData;
	extern CmdData mystruct;
	extern CmdData *cmd;
#endif

