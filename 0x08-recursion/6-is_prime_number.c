#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: integer parameter
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (not_root(n, 1));
}

/**
 * not_root - exclude numbers that have roots
 * @j: integer parameter
 * @i: integer paramer
 * Return: 1 if prime number, or 0 if not found
 */

int not_root(int j, int i)
{
	int square;

	square = i * i;
	if (square == j)
		return (0);
	else if (square < j)
		return (not_root(j, i + 1));
	return (1);
}
