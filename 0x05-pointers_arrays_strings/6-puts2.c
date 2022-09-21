#include "main.h"

/**
 * puts2 - prints every other character
 * @str: char parameter
 */

void puts2(char *str)
{
		int i;
		int j;

		for (i = 0; 0 < 1; i++)
		{
			if (str[i] == 0)
			break;
		}
		for (j = 0; j <= i; j += 2)
		{
			if (str[j] != 0)
			_putchar(str[j]);
		}
		_putchar('\n');
}
