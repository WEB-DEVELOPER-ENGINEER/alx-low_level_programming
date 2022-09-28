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
