#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);

/**
 * _sqrt- function
 * @n: the given value
 * @i: the given value
 * Return: result
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
 *_sqrt_recursion - function
 * @n: the given value
 * Return: result
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
