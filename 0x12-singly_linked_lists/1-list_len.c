#include "lists.h"

/**
 * list_len - determines the len of linked list
 * @h: pointer to the 1st node
 *
 * Return: size of list
 */

size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		h = h->next;
		p++;
	}
	return (p);
}
