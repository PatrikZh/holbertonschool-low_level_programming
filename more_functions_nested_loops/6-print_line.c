#include <stdio.h>
#include "main.h"

/**
 * print_line - print line
 * @n: the given value
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
