#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int rando;
	int i;
	int total;

	srand(time(NULL));
	for (i = 0, total = 3694; total > 182; i++)
	{
		rando = (rand() % 133) + 4;
		printf("%c", rando);
		total -= rando;
	}
	printf("%c", total);

	return (0);
}
