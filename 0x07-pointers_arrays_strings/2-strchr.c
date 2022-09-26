#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: char parameter
 * @c: char parameter
 * Return:  a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int i;
	char *pointer;

	if (s[0] != 0)
	{
		for (i = 0; s[i] != 0; i++)
		{
			if (s[i] == c)
			{
				pointer = &s[i];
				return (pointer);
			}
			else
				return ('\0');
		}
	}
	else
		return ('\0');
}
