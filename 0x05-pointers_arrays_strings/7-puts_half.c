#include "main.h"
#include <string.h>

/**
 * puts_half- first half of the sring to be printed
 *
 * @str: the parameter involved
 *
 * Return: Null
 */

void puts_half(char *str)
{
	int l = strlen(str);
	int start;

	if (l % 2 == 0)
	{
		start = l / 2;
	}
	else
	{
		start = (l - 1) / 2;
	}
	while (str[start] != '\0')
	{
		putchar(str[start]);
			start++;
	}
	putchar('\n');

}

