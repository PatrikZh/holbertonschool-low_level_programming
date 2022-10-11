#include "main.h"

/**
 * swap_int - to swap the given integers
 * @a: the given value
 * @b: the given value
 */

void swap_int(int *a, int *b)
{
	int Sharin;

	Sharin = *a;
	*a = *b;
	*b = Sharin;
}
