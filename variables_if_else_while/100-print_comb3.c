#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	 int i, p;

	for (i = '0'; i <= '8'; i++)
	{
		for (p = '1'; p <= '9'; p++)
		{
			if (i < p && i != '8')
			{
				putchar(i);
				putchar(p);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('8');
	putchar('9');
	putchar('\n');
	return (0);
}
