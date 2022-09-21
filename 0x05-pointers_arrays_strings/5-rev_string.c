#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: char parameter
 */

void rev_string(char *s)
{
	int i;
	int n = 0;
	int l;

	for (i = 0; 0 < 1; i++)
	{
		if (s[i] == 0)
			break;
	}
	for (i = i; i >= 0; i--)
	{
		if (s[i] !=0)
		{
			l = n + 1;
			for (n = 0; n < l; n++)
			{
				s[i] = s[n];
			}
		}
	}
}
