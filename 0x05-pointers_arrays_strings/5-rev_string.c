#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: char parameter
 */

void rev_string(char *s)
{
	int i;
	int n = 0;
	int j;
	int l;

	for (i = 0; 0 < 1; i++)
	{
		if (s[i] == 0)
			break;
	}

	j = i - 1;

	while (j >= 0)
	{
		if (s[j] != 0)
		{
			l = n + 1;
			while (n < l)
			{
				s[j] = s[n];
				n++;
			}
		}
		j--;
	}
}
