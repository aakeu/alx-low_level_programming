#include "main.h"
#include <stdio.h>

/**
 * leet - point of entry
 * One if, Two loops only
 * @c: input
 *
 * Return: 0 always.
 */

char *leet(char *c)
{
	int p;
	int q;
	int f[] = {'a', 'A', 'e', 'E', 'o', '0', 't', 'T', 'l', 'L'};
	int r[] = {'4', '3', '0', '7', '1'};

	for (p = 0; c[p] != '\0'; p++)
	{
		for (q = 0; q <= 9; q++)
		{
			if (c[p] == f[q])
			{
				c[p] = r[q / 2];
				q = 9;
			}
		}
	}
	return (c);
}
