#include "main.h"

/**
 * _islower - checks for lowercase character. parameter c is a letter
 * @c - parameter and is a letter
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
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
