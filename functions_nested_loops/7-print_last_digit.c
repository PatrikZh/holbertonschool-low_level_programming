#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - computes the absolute value
 * @n: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int print_last_digit(int n)

{	int digit;
	if (n < 0)
		n = n * (-1);
	digit = n % 10;
	if (digit < 0)
	digit = -digit;
	_putchar(digit + '0');
	return (digit);
}
