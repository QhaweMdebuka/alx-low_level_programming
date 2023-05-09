#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function used to print the file name
 * @filename: is the name that has been used to identify a file
 * @letters: numbeer of letters to be read
 * Return: if filename doesnt print amount of bytes return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
