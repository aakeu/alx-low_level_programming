#include "main.h"
#include <stdio.h>

/**
 * _strcat - function of concatanate two string together
 *
 * @dest: it point to destination input
 * @src: it point to source input
 *
 * Return: resulting string (dest)
 */

char *_strcat(char *dest, char *src)
{
	int c;
	int i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0; src[i] ; i++)
		dest[c++] = src[i];

	return (dest);
}
