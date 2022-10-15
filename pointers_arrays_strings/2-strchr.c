#include "main.h"
#include <stddef.h>
/**
 * _strchr - Returns a pointer to the first occurrence of the character c in
 * the string
 * @s: String
 * @c: Character to be found
 *
 * Return: Pointer to dest
 *	Pointer to the first occurente of the character c
 *	NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	do {
		if ((*s) == c)
			return (s);
	} while (*s++);

	return (NULL);
}
