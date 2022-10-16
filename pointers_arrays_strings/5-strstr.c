#include "main.h"
#include <stddef.h>
/**
 * _strstr - Finds the first ocurrence of the substring 'needle' in the
 * string 'haystack'
 * @haystack: String to be examinated
 * @needle: Substring to be found
 *
 * Return:
 *	Pointer to the beginning of the located substring
 *	NULL, if no such substring is found
 */
char *_strstr(char *haystack, char *needle)
{
	char *anchor;
	int length;

	anchor = needle;

	for (length = 0; needle[length] != '\0'; length++)
	;
	if (length == 0)
		return (haystack);

	do {
		while (*haystack == *needle)
		{
			needle++;
			if (*(needle) == '\0')
				return (haystack - length + 1);
			haystack++;
		}
		needle = anchor;
	} while (*(++haystack));
	return (NULL);
}
