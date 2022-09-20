#include "main.h"

/**
 * print_rev  - prints string, in reverse, followed by line
 * @s: parameter of type char
 */

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; 0 < 1; i++)
	{
		if (s[i] == 0)
			break;
	}

	for (j = i; j >= 0; j--)
	{
		if (s[j] != 0)
			_putchar(s[j]);
	}
	_putchar('\n');
}
