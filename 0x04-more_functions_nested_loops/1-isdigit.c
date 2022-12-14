#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: a parameter takes char or digit
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
