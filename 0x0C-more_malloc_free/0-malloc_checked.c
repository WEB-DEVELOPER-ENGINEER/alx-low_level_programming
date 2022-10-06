#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: parameter of type integer
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		exit(98);
	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
