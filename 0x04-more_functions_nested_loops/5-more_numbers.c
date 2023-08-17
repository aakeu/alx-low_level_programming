#include "main.h"

/**
 * print_most_numbers- putchar out most numbers 1 to 1 4
 *
 * @void: none
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar(1 + '0');
				k = j % 10;
			}
			_putchar(k + 48);
		}
	}	_putchar('\n');
}
