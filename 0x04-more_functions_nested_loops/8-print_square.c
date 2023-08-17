#include "main.h"

/**
 * print_square - using # to print a square
 *
 * @size: the size
 *
 * Return: 0
 */

void print_square(int size)
{
	int p, s;

	for (p = 0; p < size; p++)

	{
		for (s = 0; s < size; s++)
			_putchar('#');
		_putchar('\n');
	}
}
