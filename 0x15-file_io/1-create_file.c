#include "main.h"
#include <string.h>

/**
 * create_file - create a file.
 * @filename: The name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: the actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t text_len;
	ssize_t b_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		b_write = write(fd, text_content, text_len);
		if (b_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
