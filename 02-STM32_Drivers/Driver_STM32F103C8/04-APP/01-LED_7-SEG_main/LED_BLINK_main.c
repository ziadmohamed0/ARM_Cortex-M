/*********************************************************************************/
/* Author    : Ziad Mohammed Fathy                                               */
/* Version   : V01                                                               */
/* Date      : 5 oct 2024                                                        */
/*********************************************************************************/

/******************** 			 BLINK 		   ***********************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "LED_interface.h"

#define delay    for (int i=0; i<=500000; i++)

int main(void)
{
	/* Initialize Clock System  */
	RCC_voidInitSysClock();
	/* Enable GPIOC Clock */
	RCC_voidEnableClock(RCC_APB2,4);
	/* led on stm board */
	GPIO_voidSetPinDirection(GPIOC, PIN13, OUTPUT_SPEED_10MHZ_PP);

	while(1)
	{
		LED_voidLed_Toggle(GPIOC, PIN13);
		delay;
	}
	return 0;
}



