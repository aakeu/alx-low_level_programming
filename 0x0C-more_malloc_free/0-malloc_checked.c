#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - the vaule status of 98 cause termination
 *
 * @b: memory allocated
 *
 * Return: pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
