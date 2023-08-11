#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of thr program
 *
 * Description: This program store the last digit
 * and prints them with three possible outcome, which is namely
 * positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	y = n % 10;

	printf("%d and ", y);
	if (y > 5)
	{
		printf("is greater than 5\n");
	}
	else if (y == 0)
	{
		printf("is 0\n");
	}
	else
	{
		printf("is less than 6 and not 0\n");
	}
	return (0);
}
