#include "search_algos.h"

/**
 *
 */

int jump_search(int *array, size_t size, int value)
{
	int prev;
	size_t step;

	if (array == NULL || size == 0)
	return -1;

	step = sqrt(size);
	prev = 0;
	while (prev < (int) size && array[prev] < value)
	{
		prev += step;
	}

	if (prev >= (int) size || array[prev] > value)
	prev -= step;

	while (array[prev] < value)
	{
		prev++;
		if (prev == fmin((int) size, prev + step))
			return -1;
	}

	if (array[prev] == value)
	    return prev;

	return -1;
}
