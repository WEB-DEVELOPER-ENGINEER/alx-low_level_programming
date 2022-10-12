#include "function_pointers.h"
#include"stdlib.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: char parameter
 * @f: void pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
