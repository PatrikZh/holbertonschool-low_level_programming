#include "search_algos.h"

/**
 * linear_search - search linear for an specific value
 * @array: the array that contains the values
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: result
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n;

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%li] = [%i]\n", n, array[n]);
		if (array[n] == value)
			return (n);
	}
	return (-1);
}
