#include <stdio.h>
#include "main.h"

/**
 * rev_string - the function to reverse
 * the string
 * @s: the given value
 */

void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
