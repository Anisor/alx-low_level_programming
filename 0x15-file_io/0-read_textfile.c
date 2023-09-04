#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function reads text file print to STDOUT.
 * @filename: the text file being read
 * @letters: the number of letters to be read
 * Return: m- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t m;
	ssize_t s;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	s = read(fd, buffer, letters);
	m = write(STDOUT_FILENO, buffer, s);

	free(buffer);
	close(fd);
	return (m);
}
