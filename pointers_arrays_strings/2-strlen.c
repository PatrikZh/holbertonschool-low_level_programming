#include "main.h"
#include <stdio.h>

/**
 * _strlen - strlen library
 * prints the length
 * of a string by itself.
 * @s: the given value
 * Return: 1++ gives goes
 * on and on for the length
 * of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i++);
}
