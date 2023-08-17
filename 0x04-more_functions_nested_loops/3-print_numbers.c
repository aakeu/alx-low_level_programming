#include "main.h"

/**
 *print_numbers- print out numbers 0 to 9
 *
 * @Void: it is printing out
 *
 * Return: 0 return
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar (i + 48);
		_putchar ('\n');
	}
}
