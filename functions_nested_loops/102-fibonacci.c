#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int a1;
	long int a2;
	long int nextTerm;

	/* Initialize first and second term */
	a1 = 1;
	a2 = 2;

	/* Initialize next term */
	nextTerm = a1 + a2;

	/* Print the first two terms */
	printf("%lu, %lu, ", a1, a2);

	/* Print 3rd to 50th term */
	for (i = 3; i <= 50; i++)
	{
		printf("%lu", nextTerm);
		a1 = a2;
		a2 = nextTerm;
		nextTerm = a1 + a2;
		if (i < 50)
			printf(", ");
	}

	printf("\n");

	return (0);
}
