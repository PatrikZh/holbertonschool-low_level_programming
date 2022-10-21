#include "main.h"
#include <stddef.h>

/**
 * _strchr - function
 * @s: the given value
 * @c: the given value
 * Return: result
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
