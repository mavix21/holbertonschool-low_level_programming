#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Print the result of the operation
 * @argc: Number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *op;
	int (*op_f)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = strdup(argv[2]);
	op_f = get_op_func(op);
	if (op_f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = (*op_f)(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
