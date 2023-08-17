#include "main.h"

/**
 * print_line- printing of lane
 *
 * @n: gives the length of the lane
 *
 * Return: 0
 */

void print_line(int n)
{
	int p;

	for (p = 0; p <= n; p++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
