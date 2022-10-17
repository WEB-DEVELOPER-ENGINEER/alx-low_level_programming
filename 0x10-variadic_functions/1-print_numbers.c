#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			if (n - i == 1)
				printf("%d", va_arg(list, int));
			else
				printf("%d%s", va_arg(list, int), separator);
		}
		printf("\n");
	}
	else if (!separator)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
			printf("%d", va_arg(list, int));
		printf("\n");
	}
}
