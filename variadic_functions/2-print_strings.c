#include "variadic_functions.h"

/**
 * print_strings - function
 * @separator: the given value
 * @n: the given value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;

	va_list(arg);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		if (!s)
			printf("(nil)");
		else
		printf("%s", s);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arg);
}
