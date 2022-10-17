#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: integer
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n > 0)
	{
		int i, sum;
		va_list list;

		sum = 0;
		va_start(list, n);
		for (i = 0; i < count; i++)
			sum += va_arg(list, int);
		va_end(list);
		return (sum);
	}
	return (0);
}
