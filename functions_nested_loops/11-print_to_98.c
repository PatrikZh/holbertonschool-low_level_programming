#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to the given number
 * @n: the given integer
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);		}
	}
	printf("98\n");
}
