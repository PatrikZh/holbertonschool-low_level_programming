#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - funciton
 * @array: the given value
 * @size: the given value
 * @action: the given value
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array || action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
