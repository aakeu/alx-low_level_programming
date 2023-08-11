#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of thr program
 *
 * Description: using putchar to print a to z, except e qnd e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char counter = 'a';

	while (counter <= 'z')
	{
		if (counter != 'q' && counter != 'e')
		{
		putchar(counter);
		}
		counter++;
	}

	putchar('\n');

	return (0);
}
