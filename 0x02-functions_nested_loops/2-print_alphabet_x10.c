#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 9)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
