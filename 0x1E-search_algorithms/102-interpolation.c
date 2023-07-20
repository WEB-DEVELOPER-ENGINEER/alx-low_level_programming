#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - find num in a sorted arr using Interpolation search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l = 0, h = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	while (l <= h)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (value <= array[size - 1])
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}
	return (-1);
}
