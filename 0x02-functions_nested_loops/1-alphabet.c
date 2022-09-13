#include "main.h"


/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	{
		char i;
		
	        for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
			i++;
		}
	};
	_putchar('\n');

	return (0);
}


