#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for the array of @nmemb elements of
 * @size bytes and return to the pointer allocated
 *
 * @nmemb: give memory to array
 * @size: give element of size bytes
 *
 * Return: pointer to the given memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b == NULL)
		return (NULL);
	for (c = 0; c < (nmemb * size); c++)
		b[c] = 0;
	return (b);
}
