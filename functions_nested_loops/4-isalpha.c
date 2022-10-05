#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
