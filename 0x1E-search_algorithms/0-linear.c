#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - searches for a value in an int arr using the Linear search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}
	return (-1);
}
