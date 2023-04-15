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
	unsigned int i, j = 0, k = 0;

	if (n == 0 && m == 0)
		return (0);
	i = n & m;
	while (n)
	{
		j += n & 1;
		n >>= 1;
	}
	while (m)
	{
		j += m & 1;
		m >>= 1;
	}
	if (i == 0)
	{
		return (j);
	}
	else
	{
		while (i)
		{
			k += (i & 1);
			i >>= 1;
		}
	}
	return (j - k - 1);
}
