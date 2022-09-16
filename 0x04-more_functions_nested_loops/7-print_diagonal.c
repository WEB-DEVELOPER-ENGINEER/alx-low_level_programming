#include "main.h"

/**
 * print_diagonal -  prints n diagnoal
 * @n: number of \ to be printed
 */

void print_diagonal(int n)
{
	int i = 0;

	if (i < n)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\'');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
