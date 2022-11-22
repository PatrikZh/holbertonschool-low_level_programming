#include "main.h"

/**
 * clear_bit - function
 * @n: parameter
 * @index: parameter
 * Return: result
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value = sizeof(*n) * 8;

	if (index > value)
		return (-1);
	if (n != 0)
	{
		*n = *n & ~(1 <<  index);
		return (1);

	}
	return (-1);
}
