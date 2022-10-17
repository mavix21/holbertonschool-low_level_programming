#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse, followed by a new line
 * @s: String
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	char c;

	if (*s == '\0')
	{
		return;
	}
	c = *s;
	_print_rev_recursion(++s);
	_putchar(c);
}
