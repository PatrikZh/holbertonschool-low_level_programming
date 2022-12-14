#include <stdio.h>
#include <stdlib.h>

/**
 * main - function program that multiplies two numbers
 * @argc: stores and passses arguments on the command line
 * @argv: arrays containg strings
 * Return: Success.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
