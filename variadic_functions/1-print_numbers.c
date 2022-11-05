#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers with a given separataror between them
 * @separator: Pointer to separator
 * @n: Number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", x);
		if (i == n - 1)
		{
			printf("\n");
		}
	}

	va_end(args);
}

