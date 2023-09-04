#include "main.h"
#include <stdlib.h>

/**
 * _strdup - it return a point to a novel location
 * @str: string source
 * Return: pointer to duplicated string & NULL for insufficent memory
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = (char *)malloc((sizeof(char) * len) + 1);
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];
	duplicate[len] = '\0';
	return (duplicate);
}
