#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: the given value
 * @n: the given value
 * Return: result
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(arg);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arg);

}
