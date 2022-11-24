#include "main.h"

/**
* main - Copies the content of a file to another file
* @ac: Argument counter
* @av: Array of arguments
*
* Return: Always 0.
*/
int main(int ac, char **av)
{
	int fd_from, fd_to, fd_bad, close_check_f, close_check_t;
	ssize_t read_check, write_check;
	char buffer[1024] = {0};

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);

	do {
		read_check = read(fd_from, buffer, 1024);
		if (read_check < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		write_check = write(fd_to, buffer, read_check);
		if (write_check < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (read_check == 1024);

	close_check_f = close(fd_from);
	close_check_t = close(fd_to);
	if (close_check_f < 0 || close_check_t < 0)
	{
		fd_bad = (close_check_f < 0) ? close_check_f : close_check_t;
		dprintf(STEDERR_FILENO, "Error: Can't close fd %i\n", fd_bad);
	}

	return (0);
}
