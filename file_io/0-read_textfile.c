#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output
 * @filename: Name of the file to be read
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];
	long int actualLetters;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	actualLetters = read(fd, buf, letters);
	if (actualLetters < 0)
		return (0);

	return (write(STDOUT_FILENO, buf, actualLetters));
}
