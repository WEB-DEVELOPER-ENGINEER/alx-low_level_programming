#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: pointer to listint_t
 * Return: the sum of all the data (n) of a list or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
