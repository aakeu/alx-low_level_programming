#include "main.h"

/**
 *_print_rev_recursion- point to the string
 *@s: the string
 *Return: Nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	putchar(*s);
}
