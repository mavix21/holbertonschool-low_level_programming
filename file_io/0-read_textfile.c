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
	char *buf;
	ssize_t actualLetters, writeCheck;
	size_t charsWritten;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	actualLetters = read(fd, buf, letters);
	if (actualLetters < 0)
		return (0);

	writeCheck = write(STDOUT_FILENO, buf, actualLetters);
	if (writeCheck < 0)
		return (0);

	free(buf);
	charsWritten = (size_t)writeCheck;
	return (charsWritten);
}
