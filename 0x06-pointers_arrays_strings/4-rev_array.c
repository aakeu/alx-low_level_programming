#include "main.h"
#include <stdio.h>

/**
 * reverse_array- reverse content of array
 *
 * @a:integer array
 * @n:the number of element
 *
 * Return: it return dest
 */

void reverse_array(int *a, int n)
{
	int l = 0;
	int r = n - 1;

	while (l < r)
	{
		int temp = a[l];

		a[l] = a[r];
		a[r] = temp;
		l++;
		r--;
	}
}
