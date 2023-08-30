#include "main.h"

/**
 *_puts_recursion - it will print a string with a newline
 *@s: ponters of a string of character
 *Return: Nothing
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
