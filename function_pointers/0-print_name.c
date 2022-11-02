#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function
 * @name: parameters
 * @f: parameters
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name);
	}
}
