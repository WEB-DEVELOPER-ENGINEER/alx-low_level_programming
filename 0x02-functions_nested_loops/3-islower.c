#include "main.h"

/**
 *
 * * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase. 0 for the rest.
 */

int _islower(int c)
{
	if (97 <= c && 122 >= c)
		return (1);
	else if (65 <= c && 90 >= c)
		return (0);
	else
		return (0);
}
