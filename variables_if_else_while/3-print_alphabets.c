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

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}
	for (x = 'A' ; x <= 'Z'; x++)
	putchar('\n');
	return (0);
}
