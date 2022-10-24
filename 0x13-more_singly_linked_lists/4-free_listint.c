#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *dum;

	while (head)
	{
		dum = head->next;
		free(head);
		head = dum;
	}
}
