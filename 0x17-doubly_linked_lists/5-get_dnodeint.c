#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: a pointer
 * @index: the index of the node, starting from 0
 * Return: a node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	if (head)
		tmp = head;
	else
		return (NULL);
	if (index)
	{
		while (tmp)
		{
			if (index == 0)
				return (tmp)
			index -= 1;
			tmp = tmp->next;
		}
	}
	return (NULL);
}
