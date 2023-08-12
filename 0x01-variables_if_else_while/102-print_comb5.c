#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of thr program
 *
 * Description: This code print double digit combination
 * from 0 to 99. They are the smallest combination.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit, second_digit;
	putchar ('0');
	putchar ('0');
	putchar (' ');

	for (first_digit = 0; first_digit <= 98; first_digit++)
	{
		for (second_digit = 1; second_digit <= 99; second_digit++)
		{
			if (first_digit <= second_digit)
			{
				putchar(first_digit / 10 + '0');
				putchar(first_digit % 10 + '0');
				putchar(' ');
				putchar(second_digit / 10 + '0');
				putchar(second_digit % 10 + '0');

				if (first_digit != 98 || second_digit != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}	}
	}

	putchar('\n');
	return (0);
}

