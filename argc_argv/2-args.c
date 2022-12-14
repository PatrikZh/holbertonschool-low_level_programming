#include <stdio.h>

/**
 * main - function of printing all argumens it receives
 * @argc: stores and passses arguments on the command line
 * @argv: arrays containg strings
 * Return: Success.
 */

int main(int argc, char *argv[])
{
	int len;

	len = 0;
	while (len < argc)
	{
		printf("%s\n", argv[len]);
		len++;
	}
	return (0);
}
