#include "main.h"
/**
 * puts_half - Prints half of a string
 * to Standard Output
 * @str: String
 *
 */
void puts_half(char *str)
{
	int i;
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;

	for (i = (length / 2) + (length % 2); i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
