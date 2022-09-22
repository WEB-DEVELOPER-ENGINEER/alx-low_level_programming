#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer parameter
 * @n: integer parameter
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int y[20];
	int x;

	for (i = 0; i <= (n / 2); i++)
		y[i] = a[i];

	for (j = 0; j <= (n / 2); j++)
		a[j] = a[n - j];

	for (x = 0; x <= (n / 2); x++)
		a[j + x] = y[x];
}
