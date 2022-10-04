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
			if (i < p)
			{
				putchar(i);
				putchar(p);
			}
		if (i != '8' || p != '9')
		{	putchar(',');
			putchar(' ');
		}
		}
		}
	putchar('\n');
	return  (0);
}
