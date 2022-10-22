#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Calculates and prints the sum of positive numbers passed into
 * the program
 * @argc: Number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int sum;
	int i;
	unsigned long int j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
