#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n - integer
 *
 * Return: 1 for lowercase. 0 for the rest.
 */

int _abs(int n)
{
	if (n >= 0)
		return n;
	else
		return -n;
}
