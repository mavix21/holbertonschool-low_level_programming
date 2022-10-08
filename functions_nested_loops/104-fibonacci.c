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
	double a1;
	double a2;
	double nextTerm;

	/* Initialize first and second term */
	a1 = 1;
	a2 = 2;

	/* Initialize next term */
	nextTerm = a1 + a2;

	/* Print the first two terms */
	printf("%.0f, %.0f, ", a1, a2);

	/* Print 3rd to 98th term */
	for (i = 3; i <= 98; i++)
	{
		printf("%.0f", nextTerm);
		a1 = a2;
		a2 = nextTerm;
		nextTerm = a1 + a2;
		if (i < 98)
			printf(", ");
	}

	printf("\n");

	return (0);
}
