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
	long int sum;

	/* Initialize first and second term */
	a1 = 1;
	a2 = 2;
	sum = 2;

	/* Initialize next term */
	nextTerm = a1 + a2;

	/* Print 3rd to 50th term */
	for (i = 3; nextTerm <= 4000000; i++)
	{
		if (nextTerm % 2 == 0)
			sum = sum + nextTerm;
		a1 = a2;
		a2 = nextTerm;
		nextTerm = a1 + a2;
	}

	printf("%lu\n", sum);

	return (0);
}
