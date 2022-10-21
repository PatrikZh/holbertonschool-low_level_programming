#include "main.h"

/**
 * _memset - function
 * @s: the given value
 * @b: the given value
 * @n: the given value
 * Return: result
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		s[i] = b;
	return (s);
}
