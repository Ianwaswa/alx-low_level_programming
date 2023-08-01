#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - starts at 0.
 *
 * Return: NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
