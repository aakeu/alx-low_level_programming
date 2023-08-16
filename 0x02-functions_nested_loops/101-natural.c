#include "main.h"
#include <stdio.h>
/**
 * main -Entry point
 * Description: this will add the sum of
 *		the multiple of 3 & 5.
 * Return: Always 0 (success)
 */
int main(void)
{
	int p = 1024;
	int m = 0;

	for (int i = 1; i < p; i++)
	{
		if (i %  3 == 0 || i % 5 == 0)
		{
			m += i;
		}
	}
	printf("%d\n", m);
	return (0);
}
