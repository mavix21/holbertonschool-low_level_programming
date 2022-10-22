#include <stdio.h>
#include <stdlib.h>
/**
 * main - Calculates and prints the result of the multiplication of two numbers
 * passed as arguments
 * @argc: Number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
