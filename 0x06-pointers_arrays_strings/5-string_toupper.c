#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @s: char parameter
 * Return: char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; 0 < 1; i++)
	{
		if (s[i] == 0 || s[i] == '\n')
		{
			break;
		}
		else
			s[i] = s[i] + 32;
	}
	return (s);
}
