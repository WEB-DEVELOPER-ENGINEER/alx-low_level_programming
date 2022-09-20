#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: char parameter
 */

void rev_string(char *s)
{
	int i;
	int j;
	int n;

	for (i = 0; 0 < 1; i++)
	{
		if (s[i] == 0)
			break;
	}
	for (j = i; j >= 0; j--)
	{
		for (n = 0; n <= i; n++)
			s[j] = s[n];
	}
}
