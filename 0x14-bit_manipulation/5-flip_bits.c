#include <stdio.h>
#include "main.h"

/**
 * flip_bits - get the number of bits to flip to get from a number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits to flip to get from a number to another
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int j = 0;

	while (i)
	{
		j += i & 1;
		i >>= 1;
	}
	return (j);
}
