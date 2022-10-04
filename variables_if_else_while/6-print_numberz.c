#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	i=0;
	while(i<=57)
	{
		putchar(i);
		i++;
	}
		
	putchar('\n');
	return (0);
}
