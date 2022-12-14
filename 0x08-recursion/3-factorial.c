#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: integer parameter
 * Return: If n is lower than 0, the function return -1
 * to indicate an error
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
