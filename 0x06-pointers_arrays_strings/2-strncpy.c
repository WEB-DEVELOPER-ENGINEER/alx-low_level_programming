#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: char parameter
 * @src: char parameter
 * @n: integer parameter
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != 0; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
