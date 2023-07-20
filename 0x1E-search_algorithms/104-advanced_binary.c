#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * rec - recursive binary search
 * @array: a pointer to the first element of the array to search in
 * @size:  size
 * @value: the value to search for
 * Return: the index where value is located else -1
 */

int rec(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec(array, half + 1, value));

	half++;
	return (rec(array + half, size - half, value) + half);
}

/**
 * advanced_binary - recursive binary search
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located else -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
