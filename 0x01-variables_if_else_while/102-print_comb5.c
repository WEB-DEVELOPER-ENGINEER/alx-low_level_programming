#include <stdio.h>

/**
 * main - prints all possible combinations and return them
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int z, q;

	for (z = 0; z < 100; z++)
	{
		for (q = 0; q < 100; q++)
		{
			if (z < q)
			{
				putchar((z / 10) + 48);
				putchar((z % 10) + 48);
				putchar(' ');
				putchar((q / 10) + 48);
				putchar((q % 10) + 48);
				if (z != 98 || q != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
