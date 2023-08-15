#include "main.h"
/**
 * print_to_98 - print numbers to 98 two
 * @n:input, integert 
 * Return: no return
 */
void print_to_98(int n)
{
	int g;
		if (n <= 98)
		{
			for (g = n; g <= 98; g++)
			{
				if (g == 98)
				{
					printf("%d", g);
				}
				else
				{
					printf("%d, ", g);
				}
			}
		}
	if (n > 98)
	{
		for (g = n; n >= 98; g--)
		{
			if (g == 98)
			{
				printf("%d", g);
			}
			else
			{
				printf("%d, ", g);
			}
		}
	}
	printf("\n");

}
