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

	do {
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
			if (*(needle + 1) == '\0')
				return (needle - length + 1);
		}
		needle = anchor;
	} while (*(++haystack));
	return (NULL);
}
