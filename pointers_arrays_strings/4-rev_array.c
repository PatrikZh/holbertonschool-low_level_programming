#include "main.h"

/**
 * reverse_array - reverse array
 * @a: the given value
 * @n: the given value
 */

void reverse_array(int *a, int n)
{
	int i, d, k;

	d = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[d];
		a[d--] = k;
	}
}
