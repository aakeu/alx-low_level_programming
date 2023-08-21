#include "main.h"

/**
 * print_rev - printing a string in reverse that is
 *             followed by a new line
 *
 * @s: string is meant to be printed in reverse
 *
 * Return: Null
 */

void print_rev(char *s)
{
	int l = 0;
	int i;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = l - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

