#include "main.h"
#include <stdio.h>

/**
 *  print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */

void print_alphabet_x10(void)
{
	int j;
	char i;

	for (j = 0; j < 10; j++)
	{
		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');

	}
}
