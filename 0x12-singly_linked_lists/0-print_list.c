#include "lists.h"
#include <stdio.h>

/**
 * print_list -  prints all the elements of a list
 * @h: pointer that points to list of type list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	while (h)
	{
		i++;
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n" h->len, h->str);
		h = h->next;
	}
	return (i);
}
