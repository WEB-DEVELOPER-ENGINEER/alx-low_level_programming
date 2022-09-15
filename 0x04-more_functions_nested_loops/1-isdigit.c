#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: a parameter takes char or digit
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (sizeof(c) == sizeof(int))
		return (1);
	else
		return (0);
}
