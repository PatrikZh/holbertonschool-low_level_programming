#include "main.h"

/**
 * _memcpy - function
 * @dest: destination
 * @src: source
 * @n: the given value
 * Return: result
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		dest[i] = src[i];
	return (dest);

}
