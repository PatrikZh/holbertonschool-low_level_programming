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
	unsigned int i = 0, len1 = 0, j = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	
	if (str == NULL)
		return (NULL);
	
	if (s1)
	{
		while (i < len1)
		{
			str[i] = s1[i];
				i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	return (str);
}
