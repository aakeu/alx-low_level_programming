#include "main.h"
#include <string.h>

/**
 *_strspn - get the prefix substring
 *@s: it is string
 *@accept: bytes
 *Return: the unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	unsigned int d;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != s[c]; d++)
		{
			if (accept[d] == '\0')
				return (c);
		}
	}
	return (c);
}
