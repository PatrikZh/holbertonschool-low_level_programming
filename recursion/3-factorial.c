#include "main.h"
#include <stdio.h>

/**
 * factorial- function
 * @n: the given value
 * Return: result
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
