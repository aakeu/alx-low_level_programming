#include "main.h"
#include <stdio.h>
/**
 * main -Entry point
 * Description: this will add the sum of
 *		the even vaule sequence 4000000.
 * Return: Always 0 (success)
 */
int main(void)
{
	int count = 98;
	unsigned int term1 = 1, term2 = 2, nextTerm;

	printf("%u, %u", term1, term2);

	for (int i = 3; i <= count; i++)
	{
		nextTerm = term1 + term2;
		printf(", %u", nextTerm);
		term1 = term2;
		term2 = nextTerm;
	}

	printf("\n");
	return (0);
}

