#include "variadic_functions.h"

/**
 * print_char - Prints a char
 * @ap: Argument pointer
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - Prints an integer
 * @ap: Argument pointer
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float
 * @ap: Argument pointer
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_str - Prints a string
 * @ap: Argument pointer
 */
void print_str(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);

}
/**
 * print_all - function
 * @format: parameter
 */

void print_all(const char * const format, ...)
{
	unsigned int i;

	va_list(arg);

	va_start(arg, format);

	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case ('c'):
				printf("%c, ", va_arg(arg, int));
				break;
			case ('i'):
				printf("%d, ", va_arg(arg, int));
				break;
			case ('s'):
				printf("%s, ", va_arg(arg, char*));
				break;
			case ('f'):
				printf("%f, ", va_arg(arg, double));
				break;


		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
