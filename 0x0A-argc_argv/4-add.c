#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: num of args
 * @argv: array of pointers to str
 * Return: 1 If one of the number contains symbols else 0
 */

int main(int argc, char *argv[])
{
	char *b;
	char a;
	int i, j;
	int sum;

	j = 0;
	b = &a;
	sum = 0;
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (a = '!'; a < '~'; a++)
		{
			if ('0' <= a && a <= '9')
				a = ':';
			for (j = 0; argv[i][j]; j++)
			{
				if (*b == argv[i][j])
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
