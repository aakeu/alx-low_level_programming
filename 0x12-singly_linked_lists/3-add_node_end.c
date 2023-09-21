#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a node to the end of the list
 * @head: address of the pointer to head node
 * @str: str field
 * Return: pointer to the newly added node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(str);
	}
	else
	{
		new_node->str = NULL;
		new_node->len = 0;
	}

	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}

