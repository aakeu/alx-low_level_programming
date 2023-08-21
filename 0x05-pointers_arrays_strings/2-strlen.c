#include "main.h"
/**
 * _strlen - return the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
 */


int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
