#include "main.h"

/**
 *_strstr- give the first occurance of substring that is haystack
 *@needle: it is the substring
 *@haystack: this parameter point to the string
 *Return: NULL or pointer
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

