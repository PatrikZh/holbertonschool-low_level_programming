#include <stdio.h>
#include "main.h"

/**
 * puts_half - the function
 * @str: the given value
 */

void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
		i++;
	len = i;
	for (i = 0; i < len; i++)
	{
		if (i >= len / 2 && i % 2 != 0)
			_putchar(str[i]);
		else if (i > len / 2 && i % 2 == 0)
			_putchar(str[i]);
	}
}
