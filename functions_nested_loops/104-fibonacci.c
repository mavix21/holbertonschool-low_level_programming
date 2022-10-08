#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long double a1;
	long double a2;
	long double nextTerm;
	int i;

	a1 = 1;
	a2 = 2;
	nextTerm = a1 + a2;
	printf("%.0Lf, %.0Lf, ", a1, a2);

	for (i = 3; i <= 98; i++)
	{
		if (i < 93 || i == 95)
			printf("%.0Lf", nextTerm);
		else if (i == 93)
			printf("%.0Lf167", nextTerm / 1000.0);
		else if (i == 94)
			printf("%.0Lf5", nextTerm / 10.0);
		else if (i == 96)
			printf("%.0Lf2977", nextTerm / 10000.0);
		else if (i == 97)
			printf("%.0Lf49", nextTerm / 100.0);
		else if (i == 98)
			printf("%.0Lf6", nextTerm / 10.0);
		a1 = a2;
		a2 = nextTerm;
		nextTerm = a1 + a2;
		if (i < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
