#include "main.h"
#include <string.h>

/**
 *_strpbrk - search a string
 *@s: it is a string
 *@accept: it is the string to match
 *Return: btyes in s that match the one search
 *NULL: if such bytes in not found.
*/

char *_strpbrk(char *s, char *accept)
{
	while(*s != '\0')
	{
		if (strchr(accept, *s) != NULL) 
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
