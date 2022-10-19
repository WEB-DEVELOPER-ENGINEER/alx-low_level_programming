#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: number of args
 * @argv: array of pointers to strings
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
