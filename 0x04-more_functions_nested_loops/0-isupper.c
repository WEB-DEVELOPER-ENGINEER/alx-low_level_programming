#include "main.h"

/**
 * _isupper - return 1 for
 * uppercase character. other cases, return 0
 * @c: The character in ASCII code
 * Return: 1 for uppercase. 0 for the rest.
 */

int _isupper(int c)
{
		if (65 <= c && 90 >= c)
			return (1);
		else
			return (0);
}
