#include <stdio.h>

/**
 * main - function of printing its own name
 * @argc: stores & passses arguments on the command line
 * @argv: arrays containg strings
 * Return: 0 Success.
 */

int main(int __attribute__ ((unused)) arg, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
