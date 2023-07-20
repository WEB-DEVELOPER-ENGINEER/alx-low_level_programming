#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * jump_search - finds a value in a sorted array of ints using Jump search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, i = 0, m = sqrt(size);

	for (i = 0; i < size; i += m)
	{
		if (array[i] == value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", (i - m), i);
			for (i = i - m; i < size; i += 1)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		if (array[i] < value)
			low = i;
		else
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	if (array[0] <= value)
		printf("Value found between indexes [%ld] and [%ld]\n", low, i);
	for (i = low; i < size && array[0] <= value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
