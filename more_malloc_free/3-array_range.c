#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function
 * @min: the given value
 * @max: the given value
 * Return: result
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size = (max - min + 1);

	if (min > max)
		return (NULL);
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
