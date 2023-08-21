#include "main.h"

/**
 * _puts - printing a string that is followed by new line.
 *
 * @str: string that is to be printed
 *
 * Return: Null
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
