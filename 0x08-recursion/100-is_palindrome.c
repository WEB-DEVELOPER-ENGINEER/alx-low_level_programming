#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: char array
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 2;
	return (pal(s, length));
}

/**
 * get_length - gets length of string
 * @s: string
 * Return: length of string
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	return (1 + get_length(++s));
}



/**
 * pal - checks if palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, else 0
 */

int pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (pal(++s, l - 2));
	}
	else
		return (0);
}
