#include "main.h"

/**
 * _strspn - function
 * @accept: the given value
 * @s: the given value
 * Return - result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				b++;
				break;
			}
			if (accept[a + 1] == '\0')
				return (b);
		}
	}
	return (b);
}


