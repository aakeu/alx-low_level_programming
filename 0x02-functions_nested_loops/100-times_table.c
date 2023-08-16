#include "main.h"
/**
 * print_times_table- prints n times table two
 * @n: input number
 * Return: addtion number
 */
void print_times_table(int n)
{
	int p, m, nu;

	if (n <= 15 && n >= 0)
	{
		for (nu = 0; nu <= n; ++nu)
		{
			_putchar(48);
			for (m = 1; m <= n; ++m)
			{
				_putchar(',');
				_putchar(' ');

				p = nu * m;

				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				} else if (p <= 99 && p >= 10)
					_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
