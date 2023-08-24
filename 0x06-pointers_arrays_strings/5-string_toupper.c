#include "main.h"
#include <stdio.h>
#include "string.h"

/**
 * string_toupper- change lowercase letters to uppercase
 *
 * @str: the string to return
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int i  = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);

}
