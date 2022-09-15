/**
 * _isdigit - checks if c is a digit
 * @c: variable
 * Return: 1 if digit and 0 otherwise
 */

#include "main.h"

int _isdigit(int c)
{
	if (sizeof(c) == sizeof(int))
		return (1);
	else
		return (0);
}
