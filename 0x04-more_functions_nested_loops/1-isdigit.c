#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: a parameter variable the function checks if 
 * it is a digit and return 1
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (sizeof(c) == sizeof(int))
		return (1);
	else
		return (0);
}
