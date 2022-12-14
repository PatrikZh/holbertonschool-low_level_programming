#include "main.h"

/**
 * set_bit - function
 * @n: parameter
 * @index: parameter
 * Return: result
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value = sizeof(*n) * 8;

	if (index > value)
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
