#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Returns 1 if c is lowercase and 0 otherwise
 */

int _islower(int c) 
{
	if (97 <= c && c <= 122)
		return (1);
	else if (65 <= c && c <= 90)
		return (0);
	else 
		return (0);
}
