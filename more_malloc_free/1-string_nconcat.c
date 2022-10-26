#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	if (n < len2)
		len2 = n;
	pointer = malloc((len1 + len2 + 1) * sizeof(char));
	if (pointer == NULL)
		return (NULL);

	for (i = 0; *s1 != '\0'; i++)
	{
		pointer[i] = *s1;
		s1++;
	}
	for (i = len1; *s2 != '\0' && n != 0; i++)
	{
		pointer[i] = *s2;
		s2++;
		n--;
	}
	pointer[i] = '\0';
	return (pointer);
}
