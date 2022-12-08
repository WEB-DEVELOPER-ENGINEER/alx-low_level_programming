#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: a pointer
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	int num = 0;

	while (*h)
	{
		i++;
		num = h->n;
		printf("%d\n", num);
		h = h->next;
	}
	return (i);
}
