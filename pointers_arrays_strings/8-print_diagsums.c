#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 * @a: the given value
 * @size: the given value
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sumOne, sumTwo;

	i = 0;
	sumOne = 0;
	sumTwo = 0;
	while (i < size)
	{
		sumOne += a[(size + 1) * i];
		sumTwo += a[(size - 1) * (i + 1)];
		i++;
	}
	printf("%d, %d\n", sumOne, sumTwo);
}
