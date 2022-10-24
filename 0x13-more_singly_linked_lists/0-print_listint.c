#include "lists.h"

/**
 * print_listint - prints the elements of a listint_t list
 * @h: pointer to a listint_t
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
