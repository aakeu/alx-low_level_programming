#include "main.h"
#include <stdio.h>
/**
 * main -returns
 * @n: number
 * Return: digit
 */
int numLength(int n)
{
	int count = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		count += 1;
	}
	return (count);
}

/**
 *main - Entry point
 *Description; print starting from 1 and 2.
 *Return: always 0
 */
int main(void)
{
	int c, intial;
	unsigned long f = 1, f1 = 2, sum, mx = 100000000, flo = 0, f20 = 0, sumo = 0;

	for (c = 1; c <= 98; c++)
	{
		if (flo > 0)
			printf("%d", 0);
		intial = numLength(mx) - 1 - numLength(f);

		while (flo > 0 && intial > 0)
		{
			printf("%d", 0);
			intial--;
		}


		printf("%lu", f);

		sum = (f + f1) % mx;
		sumo = flo + f20 + (f + f1) / mx;
		f = f1;
		flo = f20;
		f1 = sum;
		f20 = sumo;

		if (c != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}

