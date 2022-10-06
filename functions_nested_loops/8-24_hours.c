#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - computes the absolute value
 * @n: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
void jack_bauer(void)
{
	int i, u;
	for (i = 0; i <= 23; i++)
	{
		for (u = 0; u <= 59; u++)
		{		_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((u / 10) + '0');
			_putchar((u % 10) + '0');
			_putchar('\n'); 	
		}
	}
	return;
}
