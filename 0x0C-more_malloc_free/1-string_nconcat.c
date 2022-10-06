#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: char parameter
 * @s2: char parameter
 * @n: integer parameter
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, k;

	if (n <= strlen(s2) && s1 != NULL && s2 != NULL)
	{
		s = malloc(strlen(s1) + n + 1);
		k = strlen(s1);
	} else if (n > strlen(s2) && s1 != NULL && s2 != NULL)
	{
		s = malloc(strlen(s1) + strlen(s2) + 1);
		k = strlen(s1);
	} else if (s1 != NULL && s2 == NULL)
	{
		s = malloc(strlen(s1) + 1);
		k = strlen(s1);
	} else if (s1 == NULL && n <= strlen(s2) && s2 != NULL)
	{
		s = malloc(n + 1);
		k = 0;
	} else if (s1 == NULL && s2 == NULL)
	{
		s = malloc(1);
		k = 0;
	}
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i <= k && s1 != NULL; i++)
		s[i] = s1[i];
	for (i = 0; n > 0 && s2[i] != 0 && i <= n; i++)
	{
		s[k] = s2[i];
		k++;
	}
	s[k] = '\0';
	return (s);
}
