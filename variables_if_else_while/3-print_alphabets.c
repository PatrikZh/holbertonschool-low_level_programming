#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}
	for (y = 'A' ; y <= 'Z'; x++)
	putchar(y);
	putchar('\n');
	return (0);
}
