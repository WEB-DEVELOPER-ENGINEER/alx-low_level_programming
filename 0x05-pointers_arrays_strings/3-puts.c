#include "main.h"

/**
 * _puts - prints string followed by line to stdout
 * @str: parameter of char type
 */

void _puts(char *str)
{
	int i;

	for (i = 0; 0 < 1; i++)
	{
		if (str[i] != 0)
		{
			_putchar(str[i]);
			_putchar('\n');
		}
		else
			break;
	}
}
