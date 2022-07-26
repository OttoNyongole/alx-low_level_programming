#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: null-terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	size_t i = 0;
	ssize_t writecount;
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[i] != 0)
		i++;
	writecount = write(fd, text_content, i);
	if (writecount == -1)
		return (-1);
	close(fd);
	return (1);
}
