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
		unsigned int i;
		int sum = 0;
		va_list list;

		va_start(list, n);
		for (i = 0; i < count; i++)
			sum += va_arg(list, int);
		va_end(list);
		return (sum);
	}
	return (0);
}
