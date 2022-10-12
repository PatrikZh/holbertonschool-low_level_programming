#include <stdio.h>
#include "main.h"

/**
 * rev_string - the function to reverse
 * the string
 * @s: the given value
 */

void rev_string(char *s)
{
	int i, len;
	char tmp;

	i = 0;
	while (s[i] != '\0')
		i++;
	len = i;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
