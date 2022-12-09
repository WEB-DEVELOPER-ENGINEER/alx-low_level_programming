#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: a pointer
 * @index: the index of the node, starting from 0
 * Return: a node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index)
	{
		while (head && head->next)
		{
			index -= 1;
			head = head->next;
			if (index == 0)
				return (head);
		}
	}
	return (NULL);
}
