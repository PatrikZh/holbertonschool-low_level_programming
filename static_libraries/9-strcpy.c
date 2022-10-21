#include <stdio.h>
#include "main.h"

/**
 * _strcpy - the function to copy a string
 * @dest: (destination) the given value
 * @src: (source) the given valu
 * Return: Always dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);

}
