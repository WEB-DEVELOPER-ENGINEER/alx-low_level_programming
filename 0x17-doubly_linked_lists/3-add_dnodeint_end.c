#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to a pointer
 * @n: an integer parameter
 * Return: the address of the new element, or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *i = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head)
	{
		i = *head;
		while (i && i->next)
		{
			i = i->next;
		}
		i->next = new;
		new->prev = i;
	}
	else
	{
		*head = new;
		new->next = NULL;
	}
	return (new);
}
