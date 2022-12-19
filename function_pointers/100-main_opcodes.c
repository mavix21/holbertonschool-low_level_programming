#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	int numberOfBytes, i;
	void *main_addr = NULL;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numberOfBytes = atoi(argv[1]);
	if (numberOfBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Get a pointer to to the start of the main function */
	main_addr = (void *)main;

	/* Print the opcodes in hexadecimal */
	for (i = 0; i < numberOfBytes; i++)
	{
		printf("%02x", *((unsigned char *)main_addr + i));
		if (i < numberOfBytes - 1)
			printf(" ");
	}

	printf("\n");

	return (EXIT_SUCCESS);
}
