#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to listint_t
 * @index: the index of the node
 * Return: a node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *dum = head;

	while (dum != NULL)
	{
		if (i == index)
			return (dum);
		i++;
		dum = dum->next;
	}
	return (NULL);
}
