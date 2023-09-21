#include "lists.h"

/**
 * _strlen - return the length of a string
 * @s: the string that is len is being checked
 *
 * Return: int len of string
 */
int _strlen(char *s)
{
	int p = 0;

	if (!s)
		return (0);
	while (*s++)
		p++;
	return (p);
}

/**
 * print_list - prints a linked lists
 * @h: pinters to the first node
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{

	size_t p = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ?
				h->str : "(nil)");
		h = h->next;
		p++;
	}
	return (p);
}
