#include "main.h"
#include <stdio.h>
/**
 * main -Entry point
 * Description: this will add the sum of
 *		the first 50.
 * Return: Always 0 (success)
 */
int main(void)
{
	int p;
	unsigned long f = 0, f1 = 1, s;

	for (p = 0; p < 50; p++)
	{
		s = f + f1;
		printf("%lu", s);

		f = f1;
		f1 = s;

		if (p == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
