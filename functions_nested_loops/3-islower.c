#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * _islower - checks for lowercase character * @c: the character to check
 *  Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
