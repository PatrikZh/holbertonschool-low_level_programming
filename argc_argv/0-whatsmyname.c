#include <stdio.h>

/**
 * main - function of printing its own name
 * @argc: stores and passses arguments on the command line
 * @argv: arrays containg strings
 * Return: Success.
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
