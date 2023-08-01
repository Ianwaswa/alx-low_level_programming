#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * 
 * @head: pointer
 * Return: sum of list
 */
int sum_listint(listint_t *head)

{
	listint_t *current;

	register int sum = 0;

	if (!head)
		return (0);
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
