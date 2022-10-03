#include "main.h"
#include <stdio.h>

/**
 * create_array -  creates an array of chars
 * @size: unsigned parameter
 * @c: char parameter
 * Return: NULL if size = 0 or if it fails
 * or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	if (s == NULL)
		return (NULL);
	char *s;
	int i;

	s = malloc(sizeof(char) * (size + 1));
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
