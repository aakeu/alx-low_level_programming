#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - ruturning one pointer to dimension of 2.
 * @height: the arrays height
 * @width: the arrays width
 * Return: pointer to 2 dimensional int array.
 */

int **alloc_grid(int width, int height)
{
	int **array, a, b;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		array[a] = (int *)malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(array[a]);
			free(array);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			array[a][b] = 0;

	return (array);
}

