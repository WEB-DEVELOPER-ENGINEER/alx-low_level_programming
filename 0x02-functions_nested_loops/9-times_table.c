#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int h, a, y;
	for (h = 0; h < 10; h++)
	{
		for (a = 0; a < 10; a++)
		{
			y = a * h;
			if (a == 0)
			{
				_putchar(y + '0');
			}
			if (y < 10 && a != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(y + '0');
			} 
			else if (y >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
