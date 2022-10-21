#include "main.h"
#include <stdio.h>

/**
 * _strstr - funciton
 * @haystack: the given value
 * @needle: the given value
 * Return: result
 */

char *_strstr(char *haystack, char *needle)
{
	int i, a;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (a = 0; needle[a] != '\0'; a++)
		{
			if (haystack[i + a] != needle[a])
				break;
		}
		if (!needle[a])
			return (&haystack[i]);
	}
	return (NULL);
}
