#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - take 2 function
 *@a: point to square matrix
 *@size: size of the square
 *Return: Null
 */

void print_diagsums(int *a, int size)
{
	int mD = 0;
	int sD = 0;
	int i;

		for (i = 0; i < size; i++)
		{
			mD += a[i];
			sD += a[size - i -1];
		}

	_putchar ("%d,", mD);
	_putchar ("%d\n", sD);
}
