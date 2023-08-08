#include "main.h"

/**
 * Function that creates a file.
 *
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Description: Returns 1 on success, -1 on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
	int file, n, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(file, text_content, length);

	if (file == -1 || n == -1)
		return (-1);

	close(file);

	return (1);
}
