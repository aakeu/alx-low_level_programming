#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
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
