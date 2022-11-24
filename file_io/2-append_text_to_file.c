#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to be appended to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writeCheck;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		writeCheck = write(fd, text_content, strlen(text_content));
		if (writeCheck < 0)
			return (-1);
	}

	close(fd);
	return (1);
}
