#include "main.h"

/**
 * more_numbers - prints from 0 to 14 10 times
 */

void more_numbers(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
				_putchar(c);
		}
	_putchar('\n');
	}
}
