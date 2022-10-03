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
	int **arr;
	int i;
	int j;

	if (width > 0 && height > 0)
	{
		arr = malloc(sizeof(int *) * height);
		if (arr == NULL)
			return (NULL);
		for (i = 0; i < height; i++)
		{
			*(arr + i) = malloc(sizeof(int) * width);
			if (*(arr + i) == NULL)
			{
				free(arr);
				for (j = 0; j <= i; j++)
					free(arr[j]);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				*(*(arr + i) + j) = 0;
		}
		return (arr);
	}
	return (NULL);
}

