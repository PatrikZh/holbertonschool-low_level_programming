#include "main.h"

/**
 * _strncat - the function that combines
 * two string
 * @dest: the given value
 * @src: the given value
 * @n: the given value
 * Return: Always (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
