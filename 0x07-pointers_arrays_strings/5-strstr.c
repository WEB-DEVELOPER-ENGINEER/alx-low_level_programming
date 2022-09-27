#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: char parameter
 * @needle: char parameter
 * Return: a pointer to the beginning of the located substring
 */


char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (k = 0; 0 < 1; k++)
	{
		if (needle[k] == 0)
			break;
	}
	for (i = 0; haystack[i] != 0; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != 0; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					if (j == (k - 1))
						return (&haystack[i]);
				}
			}
		}
	}
	return (0);
}
