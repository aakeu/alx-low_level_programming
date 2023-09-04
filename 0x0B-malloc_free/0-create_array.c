#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates array of char & initial it
 * @size: array size
 * @c:initial vaule
 * Return: pointer of array or NULL for failure.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

