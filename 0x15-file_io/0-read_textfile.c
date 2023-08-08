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
	ssize_t file;
	ssize_t numByte;
	ssize_t n;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	n = read(file, buffer, letters);
	numByte = write(STDOUT_FILENO, buffer, n);

	free(buffer);
	close(file);
	return (numByte);
}
