#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);
/**
 * strtow - split a string
 * @str: the string
 * Return: pointer of array of strings.
 */

char **strtow(char *str)
{
	int a, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	a = flag = len = 0;
	while (str[a])
	{
		if (flag == 0 && str[a] != ' ')
		{
			flag = 0;
			len++;
		}
		a++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);

	util(words, str);
	words[len] = NULL;
	return (words);
}

/**
 * util - the function retrive word in array
 * @words: the string array
 * @str: string
 */

void util(char **words, char *str)
{
	int a, b, start, flag;

	a = b = flag = 0;
	while (str[a])
	{
		if (flag == 0 && str[a] != ' ')
		{
			start = a;
			flag = 1;
		}

		if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
		{
			create_word(words, str, start, a, b);
			b++;
			flag = 0;
		}
		a++;
	}

	if (flag == 1)
		create_word(words, str, start, a, b);
}

/**
 * create_word - create word that will be kept in the array
 * @words: srray of strings
 * @str: the string in question;
 * @start: the index of the word starting point.
 * @end: the end point for the index
 * @index: index of the array for insering the word.
 */

void create_word(char **words, char *str, int start, int end, int index)
{
	int a, b;

	a = end - start;
	words[index] = (char *)malloc(sizeof(char) * (a + 1));

	for (b = 0; start < end; start++, b++)
		words[index][b] = str[start];
	words[index][b] = '\0';
}
