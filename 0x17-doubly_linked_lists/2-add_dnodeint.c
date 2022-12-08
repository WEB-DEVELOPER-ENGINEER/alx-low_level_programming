#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: a pointer to a pointer
 * @n: integer parameter
 * Return: the address of the new element, or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	new->prev = NULL;
	return (new);
}
