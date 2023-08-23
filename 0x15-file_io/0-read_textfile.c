#include "main.h"
#include <stdlib.h>

/**
 * Function that reads a text file and prints it to the POSIX standard output.
 * 
 * @letters: is the number of letters it should read and print.
 *
 * Description: Returns the actual number of letters it could read and print
 * 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t z;
	ssize_t y;
	ssize_t file;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	z = read(file, buffer, letters);
	y = write(STDOUT_FILENO, buffer, z);

	free(buffer);
	close(file);
	return (y);
}
