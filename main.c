// version 1.0
#include "main.h"
uint16_t var1 = 0x08;
void main()
{
	uint32_t var2;
	var2 = var1 << 1;
}

// version 2.0
void GPIO_Falling_Callback()
{
	var1 = 1;
}
