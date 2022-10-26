#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to pointer to listint_t
 * @idx: where the new node should be added
 * @n: data
 * Return: the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *dum;

	new->n = n;
	if (!new)
		return (NULL);
	if (head && *head)
		dum = *head;
	while (dum && i < idx)
	{

		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		if (i == (idx - 1))
		{
			new->next = dum->next;
			dum->next = new;
			return (new);
		}
		dum = dum->next;
		i++;
	}
	return (NULL);
}
