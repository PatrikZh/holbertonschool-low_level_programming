#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: the given value
 * @s2: the given value
 * @n: the given value
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *pointer;

	for (len1 = 0; s1[len1] = '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] = '\0'; len2++)
	{
	}
	if (n < len2)
		len2 = n;

	pointer = malloc((len1 + len2) * sizeof(char));
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		pointer[i] = s1[i];
	}
	for (i = len1; i < len1 + len2; i++)
	{
		pointer[i] = s2[i - len2];
	}

	return (pointer);
}
