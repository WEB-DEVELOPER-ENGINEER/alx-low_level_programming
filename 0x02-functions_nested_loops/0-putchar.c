#include "main.h"

/**
 * main - entry point
 * prints _putchar
 * Return: Always 0 (Success)
 */

int main(void) 
{
	int i = 0;
	char c[] = "_putchar";
	while (i<8)
	{	
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	
	return 0;
}
