#include <stdio.h>

/**
 * main - function of printing its own number
 * @argc: stores and passses arguments on the command line
 * @argv: arrays containg strings
 * Return: Success.
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
