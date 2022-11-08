#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: the given value
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;

	va_list(arg);

	if (n == 0)
		return (0);

	sum = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);

	return (sum);
}
