#include "ch32fun.h"

#define LED_PIN PC3

int main(void)
{
	SystemInit();
	funGpioInitAll();

	funPinMode(LED_PIN, GPIO_CFGLR_OUT_10Mhz_PP);

	while (1)
	{
		funDigitalWrite(LED_PIN, FUN_HIGH);
		Delay_Ms(1000);
		funDigitalWrite(LED_PIN, FUN_LOW);
		Delay_Ms(1000);
	}
}
