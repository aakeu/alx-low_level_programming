#include "main.h"

/**
 * _strcpy - copy the string that was pointed to src to dest
 *
 * @dest: is the destination buffer
 *
 * @src: string source
 *
 * Return: Dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;

	}
	dest[i] = '\0';

	return (dest);
}

