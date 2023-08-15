#include "main.h"
/**
 * times_table - print the 9
 * void
 * Return: no return
 */
void times_table(void)
{
	int p1;
	int p2;
	int q1;
	int q2;

	for (p1 = 0; p1 < 10; p1++)
	{
		for (p2 = 0; p2 < 10; p2++)
		{
			q1 = p1 * p2;
			q2 = (p2 + 1) * p1;
			if (q1 < 10)
			{
				_putchar(q1 + '0');
			}
			else
			{
				_putchar(q1 / 10 + '0');
				_putchar(q1 % 10 + '0');
			}
			if (p2 == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (q2 <= 9)
				{
					_putchar(' ');
				}
			}
		}
	}
}
