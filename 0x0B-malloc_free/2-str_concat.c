#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: char parameter
 * @s2: char parameter
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i;
	int n;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	s = malloc(strlen(s1) + strlen(s2) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != 0; i++)
	{
		s[i] = s1[i];
	}
	n = i;
	for (i = 0; s2[i] != 0; i++)
	{
		s[n] = s2[i];
		n++;
	}
	s[n] = '\0';
	return (s);
}
