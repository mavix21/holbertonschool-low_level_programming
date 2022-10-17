#include "main.h"
/**
 * factorial - Calculates the factorial of a given number
 * @n: Number whose factorial will be calulated
 *
 * Return: Factorial of the argument
 */
int factorial(int n)
{
	int res;

	if (n == 0)
		res = -1;

	if (n > 0)
		res = n * factorial(n - 1);
	else if (n < 0)
		res = -1;

	return (res);
}
