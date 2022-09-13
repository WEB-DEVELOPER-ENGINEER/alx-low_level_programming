#include "main.h"

/**
 * _isalpha - return 1 for char
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for char. 0 otherwise
 */

int _isalpha(int c)
{
	if (65 <= c && 90 >= c || 97 <= c && 122 >= c)
		return (1);
	else 
		return (0);
}
