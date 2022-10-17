#include "main.h"

/**
 *leet - the function
 *@a: the given value
 *Return: return result
 */

char *leet(char *a)
{
	int i, u;
	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (u = 0; u < 10; u++)
		{
			if (a[i] == x[u])
			{
				a[i] = y[u];
			}
		}
	}
	return (a);
}
