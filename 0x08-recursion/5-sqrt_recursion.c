#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: integer parameter
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}

/**
 * root - computes the root starting from number 1
 * @j: integer parameter
 * @i: integer paramer
 * Return: square root if natural square root, or -1 if not found
 */

int root(int j, int i)
{
	int square;

	square = i * i;
	if (square == j)
		return (i);
	else if (square < j)
		return (root(j, i + 1));
	return (-1);
}
