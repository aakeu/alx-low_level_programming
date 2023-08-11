#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of thr program
 *
 * Description: This spell out all digit 9 to 0
 * positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
