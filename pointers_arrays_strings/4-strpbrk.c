#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Locates the first occurrence in the string 's' of any of the
 * bytes in the string 'accept'
 * @s: String
 * @accept: Characters to be found
 *
 * Return:
 *	Pointer to the byte in 's' that matches one of the bytes in 'accept'
 *	NULL, if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *anchor;

	anchor = accept;

	do {
		while (*accept && *accept != *s)
			accept++;
		if (*accept == '\0')
		{
			accept = anchor;
			continue;
		}
		return (s);
	} while (*(++s));
	return (NULL);
}
