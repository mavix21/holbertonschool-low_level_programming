#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @s: Pointer pointing to the first element of the String
 *
 * Return: Pointer to encoded char
 */
char *rot13(char *s)
{
	char *anchor;

	anchor = s;

	do {
		if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
			*s += 13;
		else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
			*s -= 13;
	} while (*s++));

	return (anchor);
}
