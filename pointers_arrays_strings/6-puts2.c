#include "main.h"
/**
 * puts2 - Prints every other character of a string followd by a new line
 * to Standard Output
 * @str: String
 *
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
