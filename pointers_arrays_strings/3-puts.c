#include "main.h"
/**
 * _puts - Prints a string followd by a new line
 * to Standard Output
 * @str: String
 *
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
