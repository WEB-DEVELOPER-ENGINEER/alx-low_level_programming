#include "main.h"

/**
 * print_number - Print an integer using only _putchar
 * @n: integer to print
 */

void print_number(int n)
{
	if (n < 0)
	{
        _putchar('-');
        n = -n;
	}
	if(n != 0) 
	{
		print_number(n / 10);
		putchar((n % 10) + '0');
	}
}
