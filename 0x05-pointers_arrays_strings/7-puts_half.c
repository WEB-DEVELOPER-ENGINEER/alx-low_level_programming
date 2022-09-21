#include "main.h"

/**
 * puts_half - print the second half of the string
 * If the number of characters is odd, the function 
 * should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: char parameter
 */

void puts_half(char *s)
{
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	if (len1 % 2 == 0)
	{
		for (i = 0; i < len1 / 2; i++)
		{
			s[i] = s[len1];
			_putchar(s[i]);
		}
	}
	else
	{
		for (i = 0; i < (len1 - 1) / 2; i++)
		{
			s[i] = s[len1];
			_putchar(s[i]);
		}
	}
}
