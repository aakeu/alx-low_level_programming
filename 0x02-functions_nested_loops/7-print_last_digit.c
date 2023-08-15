#include "main.h"
/**
 * print_last_digit - print integer
 * @n: Integer %d input
 * Return: boolean vaule
 */
int print_last_digit(int n)
{
	int p;

	p = n % 10;
	if (p < 0)
	{
		p = -p;
	}
	_putchar(p + '0');

	return (p);
}
