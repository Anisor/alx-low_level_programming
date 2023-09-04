#include "main.h"

/**
 * create_file - function creates a file.
 * @filename: is a pointer to the name of the file to create.
 * @text_content: is a pointer to a string to write to the file.
 *
 * Return: If the function succeeds, return 1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, m, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(fd, text_content, length);

	if (fd == -1 || m == -1)
		return (-1);

	close(fd);

	return (1);
}
