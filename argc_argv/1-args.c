#include <stdio.h>
/**
 * main - Print the number of arguments passed into it
 * @argc: Number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
