#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: integer parameter
 * @height: integer parameter
 * Return: a pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int *arr;
	int **ar;
	int i;

	if (width > 0 && height > 0)
	{
		arr = malloc(sizeof(int) * width * height);
		if (arr == NULL)
			return (NULL);
		for (i = 0; i <= (width * height); i++)
		{
			arr[i] = 0;
		}
		ar = &arr;
		return (ar);
	}
	return (NULL);

}

