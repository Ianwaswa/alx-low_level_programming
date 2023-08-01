#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * 
 * @head: A pointer to the address of the head of the list
 * @n: The integer for the new node to have
 * listint_t: list
 * Return: NULL; If the function fails, Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *temp_head;

	temp_head = *head;
	*head = malloc(sizeof(listint_t));

	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = temp_head;
	
	return (*head);
}
