#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to a pointer to listint_t
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int n = (*head)->n;
	listint_t *dum = *head;

	*head = (*head)->next;
	free(dum);
	return (n);
}
