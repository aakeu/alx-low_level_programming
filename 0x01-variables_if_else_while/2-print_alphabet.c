#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of thr program
 *
 * Description: using putchar to print A to Zi
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char counter = 'a';

	while (counter <= 'z')
	{
		putchar(counter);
		counter++;
	}

	putchar('\n');

	return (0);
}
