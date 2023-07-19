#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_search - searches for num in a sorted int arr using Binary search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end, i;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: %d", array[start]);
		for (i = start + 1; i <= end; i++)
			printf(", %d", array[i]);
		mid = (start + end) / 2;
		printf("\n");
		if (value < array[mid])
			end = mid - 1;
		else if (value > array[mid])
			start = mid + 1;
		else
			return (mid);
	}
	if (value == array[mid])
		return (mid);
	return (-1);
}
