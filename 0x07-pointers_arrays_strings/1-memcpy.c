#include "main.h"

/**
 * _memcpy - printing the source and destination
 *@dest: point to destination of memory
 *@src: source of the memory
 *@n: number of bytes to copy
 *
 * Return: the pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
