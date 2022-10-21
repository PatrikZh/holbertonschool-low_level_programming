#include "main.h"
#include <stdio.h>
int _prime(int n, int i);

/**
 * _prime - function
 * @n: the given value
 * @i: the given value
 * Return: result
 */

int _prime(int n, int i)
{
	if (n < 0)
		return (0);
	if (i * i > n)
		return (1);
	else if (i * i == n)
		return (0);
	return (_prime(n, i + 1));
}

/**
 * is_prime_number - function
 * @n: the given value
 * Return: result
 */

int is_prime_number(int n)
{
	return (_prime(n, 0));
}
