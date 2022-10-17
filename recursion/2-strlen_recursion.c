#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string
 * @s: String
 *
 * Return: Length of the given string
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		length = 0;
		return (length);
	}
	length = _strlen_recursion(++s);
	length++;
	return (length);
}
