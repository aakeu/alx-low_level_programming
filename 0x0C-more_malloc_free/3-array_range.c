#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create the array for integers
 * @min: minimum value of the range stored
 * @max: maximum vaulue of the range stored
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	ptr = malloc(sizeof(int) * s);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
