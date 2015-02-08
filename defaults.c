#include <stdint.h>
#include "color_control.h"

extern uint8_t *R_current, *G_current, *B_current, *StayTime, *ChangeTime, *Enable_Random;

void Defaults()
{
	*R_current=1;
	*G_current=1;
	*B_current=1;
	*StayTime=1;
	*ChangeTime=1;
	*Enable_Random=0;
	Color_SetR(*R_current);
	Color_SetG(*G_current);
	Color_SetB(*B_current);
}

