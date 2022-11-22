#include "main.h"
/**
 * strlen_ - function
 * @s: parameter
 * Return: result
 */

int strlen_(char *s)
{
	int i;

	i = 0;
	while (*s++)
	{
		i++;
	}
	return (i);
}
/**
 * create_file - function
 * @filename: parameter
 * @text_content: parameter
 * Return: result
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (write(fd, text_content, strlen_(text_content)) == -1)
		return (-1);
	if (!text_context)
		return (1);
	close(fd);
	return (1);
}
