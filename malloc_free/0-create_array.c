#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function
 * @size: the given value
 * @c: the given value
 * Return: result
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	while (i < size)
	{
		a[i] = c;
		i++;
	}

	if (size == 0)
		return (NULL);

	return (a);
}
