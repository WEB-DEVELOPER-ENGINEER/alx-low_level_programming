#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer
 * @to: pointer
 */

void set_string(char **s, char *to)
{

	if (s && to)
	{
		*s = to;
	}
}
