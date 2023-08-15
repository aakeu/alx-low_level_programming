#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	char counter;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (counter = 'a'; counter <= 'z'; counter++)
		{
			_putchar(counter);
		}

		_putchar('\n');
	}
}
