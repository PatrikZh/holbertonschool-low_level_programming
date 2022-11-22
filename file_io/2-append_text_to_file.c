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
 * append_text_to_file - function
 * @filename: parameter
 * @text_content: parameter
 * Return: result
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0334);
	if (!text_content)
		return (1);
	if (write(fd, text_content, strlen_(text_content)) == -1)
		return (-1);
	close(fd);
	return (1);
}
