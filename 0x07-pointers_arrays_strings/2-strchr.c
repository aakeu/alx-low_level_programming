#include "main.h"

/**
 *_strchr- return the first occurence of his charater
 *@c: pointer to the string
 *@s: charater to be located
 *Return: Pointer to s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
