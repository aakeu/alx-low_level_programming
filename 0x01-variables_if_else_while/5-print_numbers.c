#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of thr program
 *
 * Description: This program print digit of base 10
 * positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char counter = '0';

	while (counter <= '9')
	{
		putchar(counter);
		counter++;
	}

	putchar('\n');

	return (0);
}
