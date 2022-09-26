#include "main.h"

/**
 * _strpbrk -  locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: char parameter
 * @accept: char parameter
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int n;
	int k;

	for (n = 0; 0 < 1; n++)
	{
		if (s[n] == 0)
			break;
	}
	for (k = 0; 0 < 1; k++)
	{
		if (accept[k] == 0)
			break;
	}
	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < n; j++)
		{
		if (s[i] == accept[j])
			return (&s[i]);
		else if (j == (k - 1) && s[i] != accept[j])
			return (0);
		else if (i < k && i == (n - 1) && i == j && s[i] != accept[j])
			return (0);
		}
	}
	return (0);
}
