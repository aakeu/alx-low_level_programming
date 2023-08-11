#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of thr program
 *
 * Description: This program writh z-a
 * positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
