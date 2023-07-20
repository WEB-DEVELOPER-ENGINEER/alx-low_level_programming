#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * exponential_search - finds a value in an array using exponential search
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 * Return: the index of the value else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t start = 1, end = 1, x;

	if (array == NULL || size == 0)
		return (-1);
	while (end < size)
	{
		if (value < array[end])
			break;
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end = end * 2;
	}
	x = end < size - 1 ? end : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", start, x);
	return (binary_helper(array, value, end / 2, x));
}

/**
 * binary_helper - searches for a value in an array of ints using recursion
 * @array: array to search the value in
 * @value: value to look for
 * @lo: index of the lower bound
 * @hi: index of the upper bound
 * Return: the index of the value else -1
 */

int binary_helper(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	print_array(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);
	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (binary_helper(array, value, lo, mid - 1));
	if (array[mid] < value)
		return (binary_helper(array, value, mid + 1, hi));
	return (-1);
}

/**
 * print_array - prints an array of integers
 * @array: array to print
 * @l: index of the lower bound
 * @h: index of the upper bound
 */

void print_array(int *array, size_t l, size_t h)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= h; i++)
	{
		printf("%d", array[i]);
		if (i < h)
			printf(", ");
	}
	printf("\n");
}
