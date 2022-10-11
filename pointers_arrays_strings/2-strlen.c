#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: String
 *
 * Return: Length of the String
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
