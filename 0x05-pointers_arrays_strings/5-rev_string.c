#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: char parameter
 */

void rev_string(char *s)
{
	int i;
	int j;
	int n = 0;
	int l;

	for (i = 0; 0 < 1; i++)
	{
		if (s[i] == 0)
			break;
	}
	for (j = i; j >= 0; j--)
	{
		l = n + 1;
		for (n = 0; n < l; n++)
		{
			s[n] = s[j];
		}
	}
}
