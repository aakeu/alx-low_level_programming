#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9.
 *
 * Description: This function prints numbers from 0 to 9 using _putchar.
 *
 * Return: void (no return value)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}

