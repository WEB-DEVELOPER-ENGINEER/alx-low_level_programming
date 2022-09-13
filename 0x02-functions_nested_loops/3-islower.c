#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Returns 1 if c is lowercase and 0 otherwise
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
