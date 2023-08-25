#include "main.h"
#include <stdio.h>

/**
 * *cap_string - determine if the asscii letter is  lowercase letters
 * is_seperate - determine the Asscii demiliter
 * @n:spring
 *
 * Return: 1 if true.
 */

char *cap_string(char *n)
{
	int a;
	int b;
	int c = 32;
	int s[] = {',', ';', '.', '?', '"', '(',
		')', '{', '}', ' ', '\n', '\t'};

	for (a = 0; n[a] != '\n'; a++)
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			n[a] = n[a] - c;
		}

		c = 0;

		for (b = 0; b <= 12; b++)
		{
			if (n[a] == s[b])
			{
				b = 12;
				c = 32;
			}
		}
	}
	return (n);

}
