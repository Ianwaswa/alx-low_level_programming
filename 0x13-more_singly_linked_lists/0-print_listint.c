#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t list.
 * @h: pointer to the head of the list_t list.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)

{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
