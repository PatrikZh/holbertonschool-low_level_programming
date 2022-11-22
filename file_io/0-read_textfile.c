#include "main.h"

/**
 * read_textfile - function
 * @filename: parameter
 * @letters: parameter
 * Return: result
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t size;

	buffer = malloc(sizeof(char) * letters + 1);

	fd = open(filename, O_RDONLY);
	size = read(fd, buffer, letters);

	if (fd == -1)
		return (0);
	if (!buffer)
		return (0);
	if (!filename)
		return (0);
	buffer[size] = '\0';
	size = write(STDOUT_FILENO, buffer, size);

	if (size == -1)
		return (0);
	close(fd);
	return (size);

}
