#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: a pointer to pointer
 * @idx: the index of the list where the node should be added
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (*h)
	{
		dlistint_t *tmp = *h;
		dlistint_t *new = malloc(sizeof(dlistint_t));

		if (!new)
			return (NULL);
		new->n = n;
		while (tmp)
		{
			if (idx == 1)
			{
				dlistint_t *temp = tmp->next;

				tmp->next = new;
				new->prev = tmp;
				new->next = temp;
				return (new);
			}
			idx -= 1;
			tmp = tmp->next;
		}
	}
	return (NULL);
}
