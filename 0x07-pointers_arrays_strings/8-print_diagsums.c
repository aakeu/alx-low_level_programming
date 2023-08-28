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
	int p;
	int q;
	int mD = 0;
	int sD = 0;

	for (p = 0; p <= (size * size); p = p + size + 1)
		mD = mD + a[p];

	for (q = size - 1; q <= (size * size) - size; q = q + size - 1)
		sD = sD + a[q];

	printf("%d, %d\n", mD, sD);
}
