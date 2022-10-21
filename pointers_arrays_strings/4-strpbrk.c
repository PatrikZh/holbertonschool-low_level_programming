#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function
 * @s: the given value
 * @accept: the given value
 * Return: result
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, a;
	char *czar;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				czar = &s[i];
				return (czar);
			}
		}
	}

	return (NULL);
}
