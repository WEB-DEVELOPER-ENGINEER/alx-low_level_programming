#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to a pointer to listint_t
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *dum;

	if (head)
	{
		if (*head)
		{
		n = (*head)->n;

		dum = *head;

		*head = (*head)->next;
		free(dum);
		}
	}
	return (n);
}
