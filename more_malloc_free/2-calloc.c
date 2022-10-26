#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function
 * @nmemb: the given value
 * @size: the given value
 * Return: result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = calloc(nmemb, size);
	if (i == NULL)
		return (NULL);
	return (i);
}
