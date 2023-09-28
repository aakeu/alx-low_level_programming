#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int in, counter = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (in = 63; in >= 0; in--)
	{
		current = exclusive >> in;
		if (current & 1)
			counter++;
	}

	return (counter);
}
