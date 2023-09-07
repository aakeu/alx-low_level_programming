#include "main.h"
#include <stdlib.h>

/**
 * _realloc - relocate a memory block by using the method of malloc and free
 *
 * @ptr: pointer to ther previously allocated memory
 * @old_size: size of bytes for ptr
 * @new_size: size of the new memory block
 *
 * Return: pointer allocated to the new memory size, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int a, b = new_size;
	char *olds = ptr;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	if (new_size > old_size)
		b = old_size;
	for (a = 0; a < b; a++)
		s[a] = olds[a];
	free(ptr);
	return (s);
}
