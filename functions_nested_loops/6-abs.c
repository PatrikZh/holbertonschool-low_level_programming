#include "main.h"
#include <stdio.h>

/**
 * function _abs - checks for alphabetic character
 * @n: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * (-1));
}
