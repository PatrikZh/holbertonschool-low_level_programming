#include "main.h"

/**
 * get_bit - function
 * @n: parameter
 * @index: parameter
 * Return: result
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit, value = sizeof(n) * 8;

	if (index > value)
		return (-1);

	if (n > 0)
	{
		bit = (n >> index) & 1;
		return (bit);
	}
	else
		return (-1);
}
