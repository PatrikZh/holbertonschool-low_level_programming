#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: the given value
 * Return: result
 */

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
