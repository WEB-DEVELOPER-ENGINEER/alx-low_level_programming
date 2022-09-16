#include "main.h"

/**
 * print_line -  prints n lines
 */

void print_line(int n)
{
	int i = 0;
	
	if (i < n)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
