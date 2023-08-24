#include "main.h"
#include <stdio.h>

/**
 * _strncat- terminating at null.
 *
 * @n: most of the bytes from src
 * @dest:pointer to the input destination
 * @src: pointer to the source of an input
 *
 * Return: it return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_l = 0;
	int src_l = 0;

	while (dest[dest_l] != '\0')
	{
		dest_l++;
	}

	while (src_l < n && src[src_l] != '\0')
	{
		dest[dest_l + src_l] = src[src_l];
		src_l++;
	}
	dest[dest_l + src_l] = '\0';

	return (dest);
}
