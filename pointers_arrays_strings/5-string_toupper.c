#include "main.h"

/**
 *string_toupper - the functio n
 *@a: the given value
 *Return: return result
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
	if (a[i] >= 'a' && a[i] <= 'z')
	{
		a[i] -= 32;
	}
	}
	return (a);
}
