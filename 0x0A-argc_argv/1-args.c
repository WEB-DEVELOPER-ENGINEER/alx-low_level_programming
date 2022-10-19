#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: args count
 * @argv: array of pointers to strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
