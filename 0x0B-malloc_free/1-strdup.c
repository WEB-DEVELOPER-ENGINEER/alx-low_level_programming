#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str: char parameter
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);
	s = malloc(strlen(str) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; str != 0; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	free(s);
	return (s);
}
