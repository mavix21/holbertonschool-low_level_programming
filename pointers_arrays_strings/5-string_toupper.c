#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: Pointer pointing to the first element of the String
 *
 * Return: Pointer to char
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
