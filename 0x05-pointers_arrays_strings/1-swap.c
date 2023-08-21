#include "main.h"

/**
 * swap_int - it swap the input of a for be & b for a
 *            for both integer
 *
 * @a: input parameter first (1)
 * @b: input parameter second (2)
 *
 * Retunr: Null
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


