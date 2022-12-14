#include <stdio.h>
#include <stdlib.h>

/**
 * main - funcion that adds positive numbers
 * @argc: stores and passses arguments on the command line
 * @argv: arrays containg strings
 * Return: Success.
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Errror\n");
				return (1);
			}

		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
