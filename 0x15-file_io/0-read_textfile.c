#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 * @filename: The the  file name
 * @letters: size_t number of letters to be read and print
 * Return: the actual number of letters it could read and print
 * On error, 0 is returned, and errno is set appropriately.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	size_t b_read, b_write;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	b_read = read(fd, buf, letters);
	if (b_read < 1)
		return (0);
	b_write = write(STDOUT_FILENO, buf, b_read);
	if (b_write < 1)
		return (0);
	free(buf);
	close(fd);
	return (b_write);
}
