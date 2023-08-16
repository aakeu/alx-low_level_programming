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
	int p, s;

	for (s = 0; s < 2024; s++)
	{
		if ((s %  3 == 0 || (s % 5 == 0))
		{
			p += s;
		}
	}
	printf("%d\n", p);
	return (0);
}
