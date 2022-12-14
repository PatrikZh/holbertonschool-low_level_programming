#include <stdio.h>

/**
 *
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int i, j, sum;

	i = 0;
	j = 0;
	while (i && j < argc)
	{
		sum = (i * j);
		printf ("%d\n", sum);
	}
	return (0);
}
