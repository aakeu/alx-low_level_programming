#include "main.h"
#include <string.h>

/**
 * print_array- the order of content or elments in array
 *
 * @n: inputs of parameters elements
 *
 * @a: inputs of strings parameter
 *
 * Return: Null
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

	}
	printf("\n");
}

