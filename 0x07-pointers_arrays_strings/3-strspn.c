#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: char parameter
 * @accept: char parameter
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int n;

	for (n = 0; 0 < 1; n++)
	{
		if (accept[n] == 0)
			break;
	}


	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (s[i] == accept[j])
				break;
			else if (j == (n - 1) && s[i] != accept[j])
				return (i);
		}
	}
	return (0);
}
