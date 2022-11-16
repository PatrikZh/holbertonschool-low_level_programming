#include "variadic_functions.h"

/**
 * print_all - function
 */

void print_all(const char * const format, ...)
{
	int i; 
	char *s;
	
	va_list(arg);

	va_start(arg,format);

	s = va_arg(arg, char *);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
			printf("%c", va_arg(arg, int));
		if (format[i] == 'i')
			printf("%d", va_arg(arg, int));
		switch (format[i])
		{
			case 's'
				printf("%s", s);
			case 'f'
				printf("%f", va_arg(arg, double));
		}
			i++;
	}
}
