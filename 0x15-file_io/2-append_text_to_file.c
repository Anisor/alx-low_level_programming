#include "main.h"

/**
 * Function that appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Description: Returns 1 on success and -1 on failure
 *         	If filename is NULL return -1
 *         	Returns 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int s, t, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	s = open(filename, O_WRONLY | O_APPEND);
	t = write(s, text_content, length);

	if (s == -1 || t == -1)
		return (-1);

	close(s);

	return (1);
}
