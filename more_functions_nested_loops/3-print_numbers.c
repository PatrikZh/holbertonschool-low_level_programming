#include <stdio.h>
#include "main.h"

/**
 * print_numbers  - the function that multiplicates
 * @a: the given components
 * Return: Always 0.
 */
void print_numbers(void)
{
	int a;

		for (a = '0'; a <= '9'; a++)
		{
			_putchar(a);
		}
			_putchar('\n');
}
