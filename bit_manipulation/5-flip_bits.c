#include "main.h"

/**
 * flip_bits - function
 * @n: parameter
 * @m: parameter
 * Return: result
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	int count = 0;

	while (XOR)
	{
		count += (XOR & 1);
		XOR >>= 1;
	}

	return (count);
}
