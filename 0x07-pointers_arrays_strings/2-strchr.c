#include "main.h"

/**
 *_strchr- return the first occurence of his charater
 *@c: pointer to the string
 *@s: charater to be located
 *Return: Pointer to s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
