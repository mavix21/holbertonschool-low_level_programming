#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - Prints a char
 * @args: Variable of type va_list. It contains a pointer to the
 * character to be printed
 *
 * Return: Nothing
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - Prints an integer
 * @args: Variable of type va_list. It contains a pointer to the
 * integer to be printed
 *
 * Return: Nothing
 */
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}

/**
 * print_float - Prints a float
 * @args: Variable of type va_list. It contains a pointer to the
 * float number to be printed
 *
 * Return: Nothing
 */
void print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string - Prints a String
 * @args: Variable of type va_list. It contains a pointer to the
 * first character of the String to be printed
 *
 * Return: Nothing
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything accordingly to the given format
 * @format: List of types of arguments passed to the function
 *	c: char
 *	i: integer
 *	f: float
 *	s: char *
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	fmt_t fmts[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (fmts[j].formater != NULL)
		{
			if (format[i] == *(fmts[j].formater))
			{
				(*(fmts[j].print_fmt))(args);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
				break;
			}
			j++;
		}
		i++;

	}
	printf("\n");

	va_end(args);
}

