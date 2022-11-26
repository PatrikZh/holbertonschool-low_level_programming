#include "main.h"

/**
 * main - function
 * @argc: paramter
 * @argv: paramete
 * Return: result/0.
 */

int main(int argc, char **argv)
{
	int temp1, temp2, i;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	temp1 = open(argv[1], O_RDONLY);
	if (temp1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	temp2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((i = read(temp1, buffer, 1024)) > 0)
	{
		if ((write(temp2, buffer, i)) != i || temp2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(temp1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", temp1), exit(100);
	if (close(temp2))
		dprintf(STDERR_FILENO, "Error: Can't close temp %d\n", temp2), exit(100);

	return (0);
}
