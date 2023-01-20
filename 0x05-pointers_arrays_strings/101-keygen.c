#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int rando;
	int i;
	int total;

	srand(time(NULL));
	for (i = 0, total = 3694; total > 122; i++)
	{
		rando = (rand() % 125) + 1;
		printf("%c", rando);
		total -= rando;
	}
	printf("%c", total);

	return (0);
}
