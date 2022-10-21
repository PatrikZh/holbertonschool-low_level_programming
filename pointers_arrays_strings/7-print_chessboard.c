#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - funciton
 * @a: the given value
 */

void print_chessboard(char (*a)[8])
{
	int i, u;

	for (i = 0; i < 8; i++)
	{
		for (u = 0; u < 8; u++)
		{
			_putchar (a[i][u]);
		}
		_putchar('\n');
	}
}
