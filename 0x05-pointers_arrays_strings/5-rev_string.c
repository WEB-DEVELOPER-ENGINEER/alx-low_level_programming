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
			for (n = 0; 0 < 1; n++)
			{
				s[n] = s[j];
				break;
			}
		}
		j--;
	}
}
