#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers from 0 to 9 except for 2 and 4
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '4' || c == '2')
			continue
		_putchar(c);
	}
	_putchar('\n');
}
