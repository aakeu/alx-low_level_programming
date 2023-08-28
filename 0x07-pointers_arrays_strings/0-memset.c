#include "main.h"
/**
 * _memset - fill the first bytes.
 *@s: point to where the contact is placed
 *@b: constant
 *@n: maximum bytes to use
 *Return: pointers used
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
