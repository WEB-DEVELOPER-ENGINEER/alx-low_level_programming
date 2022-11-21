#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a num
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int i, x;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
