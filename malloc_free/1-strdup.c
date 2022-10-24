#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function
 * @str: the given value
 * Return: result
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, u;

	i = 0;
	u = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * i + 1);

	if (str == NULL)
	{
		return (NULL);

	}
	if (s == NULL)
	{
		return (NULL);

	}
	while ((s[u] = str[u]) != '\0')
	{
		u++;
	}
	return (s);
}
