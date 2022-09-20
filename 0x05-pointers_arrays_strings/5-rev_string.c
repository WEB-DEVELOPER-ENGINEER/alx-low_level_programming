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
	int l = 1;

	for (i = 0; 0 < 1; i++)
	{
		if (s[i] == 0)
			break;
	}
	for (j = i; j >= 0; j--)
	{
		for (n = 0; n < l; n++)
		{
			l += 1;
			s[n] = s[j];
		}
	}
}
