#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings with a given separataror between them
 * @separator: Pointer to separator
 * @n: Number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	printf("\n");

	va_end(args);
}

