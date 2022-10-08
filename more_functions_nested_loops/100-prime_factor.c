#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int n;
	unsigned long int largestPrimeFactor;

	n = 612852475143;
	while (n % 2 == 0)
		n /= 2;

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			largestPrimeFactor = i;
			n /= i;
		}
	}
	if (n > 2)
		largestPrimeFactor = n;

	printf("%lu\n", largestPrimeFactor);

	return (0);
}
