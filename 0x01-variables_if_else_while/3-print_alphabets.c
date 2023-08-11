#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of thr program
 *
 * Description: using putchar to print a to z, A to Z
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

	counter = 'A';

	while (counter <= 'Z')
	{
		putchar(counter);
		counter++;
	}

	putchar('\n');

	return (0);
}
