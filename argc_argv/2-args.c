#include <stdio.h>
/**
 * main - Print all the of arguments passed into it
 * @argc: Number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
