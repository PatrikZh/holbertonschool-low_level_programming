#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: parameter
 * @argv: double pointer/parameter
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	if ((operator == '/' || operator == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(operator)(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
