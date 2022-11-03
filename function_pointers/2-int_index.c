#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * int_index - function
 * @array: the given value
 * @size: the given value
 * @cmp: the given value
 * Return: result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, a;

	if (size <= 0)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		a = (*cmp)(array[i]);
		if (a == 1)
			return (i);
	}
	return (-1);
}
