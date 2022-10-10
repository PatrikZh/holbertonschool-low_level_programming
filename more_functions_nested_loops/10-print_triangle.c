#include "main.h"

/**
 * print_triangle - prints a triangle,
 * followed by a new line
 * @size: the given value
 */

void print_triangle(int size)

{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if ((x + y) < (size - 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
