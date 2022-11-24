#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file
 * @filename: Name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writeCheck;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 00600);
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
