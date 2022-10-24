#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function
 * @str: the given value
 * Return: result
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i, u;

	i = 0;
	u = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	a = malloc(sizeof(char) * i + 1);

	if (str == NULL)
	{
		return (NULL);

	}
	if (a == NULL)
	{
		return (NULL);

	}
	while ((a[u] = str[u]) != '\0')
	{
		u++;
	}
	return (a);
}
