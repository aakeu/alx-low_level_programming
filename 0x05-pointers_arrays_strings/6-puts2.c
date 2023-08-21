#include "main.h"
#include <string.h>

/**
 * puts2- putchar out characters on the other line
 *
 * @str: strings that input the parameter
 *
 * Return: Null
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; ++i)

	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');

}
