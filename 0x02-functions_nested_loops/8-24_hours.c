#include "main.h"
/**
 * jack_bauer - print integer
 * void
 * Return: no return
 */
int jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
		}
	}
}
