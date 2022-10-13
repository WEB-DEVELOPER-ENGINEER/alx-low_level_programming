#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: integer parameter
 * @size: parameter
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || !array)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);

}
