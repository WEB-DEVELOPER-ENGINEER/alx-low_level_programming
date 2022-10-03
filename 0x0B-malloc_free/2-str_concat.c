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
	int j;

	if (s1 == NULL && s2 == NULL)
		s[] = '';
	else if (s1 == NULL && s2 != NULL)
		s = malloc(strlen(s2) + 1);
	else if (s2 == NULL && s1 != NULL)
		s = malloc(strlen(s1) + 1);
	else if (s1 != NULL && s2 != NULL)
		s = malloc(strlen(s1) + strlen(s2) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && s1[i] != 0; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2 != NULL && s2[j] != 0; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
