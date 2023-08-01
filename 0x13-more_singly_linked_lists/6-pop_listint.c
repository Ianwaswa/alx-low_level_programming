#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - Erases the first node.
  * @head: pointer to the head of the list.
  *
  * Return: Value for the node.
  */
int pop_listint(listint_t **head)

{
	listint_t *tmp;

	unsigned int i;

	tmp = *head;

	if (tmp == NULL)
		return (0);

	i = tmp->n;
	*head = tmp->next;

	free(tmp);

	return (i);
}
