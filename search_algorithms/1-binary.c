#include "search_algos.h"

/**
 * binary_search - search by adding first number to the last and divide by two
 * @array: the array that contains the values
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: result
 */

int binary_search(int *array, size_t size, int value)
{
	size_t n, start, end;

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (n = start; n <= end; n++)
		{
			printf("%d", array[n]);
			if (n < end)
				printf(", ");
		}
		printf("\n");
		n = (start + end) / 2;
		if (array[n] < value)
			start = n + 1;
		else if (array[n] > value)
			end = n - 1;
		else
			return (n);
		if (array == NULL)
			return -1;
	}
	return (-1);
}
