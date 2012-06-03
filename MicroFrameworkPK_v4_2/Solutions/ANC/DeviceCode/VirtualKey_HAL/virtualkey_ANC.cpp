////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <tinyhal.h>

GPIO_PIN VirtualKey_GetPins( UINT32 virtualKey)
{
	switch(virtualKey)
	{
		case VK_SELECT:
			return LPC178X_GPIO::c_P2_21;
		case VK_RIGHT:
			return LPC178X_GPIO::c_P0_21;
		case VK_DOWN:
			return LPC178X_GPIO::c_P0_24;
		case VK_LEFT:
			return LPC178X_GPIO::c_P0_22;
		case VK_UP:
			return LPC178X_GPIO::c_P0_23;
		default:
			return GPIO_PIN_NONE;
	}
   return GPIO_PIN_NONE; 
}
