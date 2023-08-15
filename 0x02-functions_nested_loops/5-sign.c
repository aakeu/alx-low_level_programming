#include "main.h"
/**
 * print_sign - print sign according to number
 * @n: Integer %d input
 * Return: boolean vaule
 */
int print_sign(int n)
{
	int number  = 0;

	if (n > 0)
	{
		number = 1;
		_putchar('+');
	}
	if (n == 0)
	{
		number = 0;
		_putchar('0');
	}
	if (n < 0)
	{
		number = -1;
		_putchar('-');
	}
	return (number);
}
