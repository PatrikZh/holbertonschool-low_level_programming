#include "main.h"

/**
 * cap_string - the function
 * @a: the given value
 * Return: return result
 */

char *cap_string(char *a)
{
	int i = 0;

	if (a[i] >= 'a' && a[i] <= 'z')

		a[i] -= 32;

	for (i = 0; a[i] != '\0'; i++)
	{

		if (a[i] > 0 && a[i] < 47 && a[i] != '-')
		{
			i++;

			if (a[i] >= 'a' && a[i] <= 'z')

				a[i] -= 32;
			i--;

		}
		if (a[i] > 122 || (a[i] > 57 && a[i] < 65))
		{
			i++;

			if (a[i] >= 'a' && a[i] <= 'z')

				a[i] -= 32;
			i--;
		}
	}
	return (a);
}
