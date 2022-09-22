#include "main.h"

/**
 * _strncat - concatenates two strings but you
 * can specify the number of char to be concatenated
 * from the second string
 * @dest: char parameter
 * @src: char parameter
 * @n: integer parameter
 * Return: the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; 0 < 1; i++)
	{
		if (dest[i] == 0)
			break;
	}
	for (j = 0; j < n && src[j] != 0; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
