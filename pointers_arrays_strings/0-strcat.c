#include "main.h"

/**
 * _strcat - the function that combines
 * two string
 * @dest: the given value
 * @src: the given value
 * Return: Always (dest).
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
