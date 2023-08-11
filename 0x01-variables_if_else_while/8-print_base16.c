#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of thr program
 *
 * Description: This program will display 9 to 0 and f to a
 * positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	for (digit = 'a'; digit  <= 'f'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');
	return (0);
}
