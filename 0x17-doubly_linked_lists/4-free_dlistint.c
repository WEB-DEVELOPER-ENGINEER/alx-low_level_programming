#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: a pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *spare = head;

	while (head)
	{
		head = head->next;
		free(head);
	}
	free(head);
	free(spare);
}
