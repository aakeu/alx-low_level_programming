#include "main.h"

/**
 * print_diagonal - printing a  lane
 *
 * @n:  gives \ line
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (s = 2; s <= p; s++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}


}
