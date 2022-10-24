#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - funciton
 * @s1: the given value
 * @s2: the given value
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i = 0, u = 0, j = 0, x = 0;

	while (s1 && s1[u])
		u++;

	while (s2 && s2[x])
		x++;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	str = malloc(sizeof(char) * (s1[u] + s2[x] + 1));

	if (s1)
	{
		while (i < u)
		{
			str[i] = s1[i];
				i++;
		}
		}
			if (str == NULL)
			return (NULL);
	if (s2)
	{
		while (i < (u + x))
        	{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	return (str);
}
