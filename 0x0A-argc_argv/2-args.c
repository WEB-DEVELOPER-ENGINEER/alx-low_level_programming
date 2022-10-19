#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: num of args
 * @argv: array of pointers to strings
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
