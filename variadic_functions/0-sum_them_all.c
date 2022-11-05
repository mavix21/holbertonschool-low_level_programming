#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Adds up all its parameters
 * @n: Number of parameters
 *
 * Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x, sum;

	sum = 0;
	if (n == 0)
		return (sum);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}

	va_end(args);

	return (sum);
}

