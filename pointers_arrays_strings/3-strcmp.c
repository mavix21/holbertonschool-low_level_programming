#include "main.h"
/**
 * _strcmp - Compares two strings character by caracter
 * @s1: Pointer to the first String
 * @s2: Pointer to the second String
 *
 * Return:
 *	0, if strings are equal
 *	>0; if the first non-matching character in s1 is greater than that of s2
 *	<0; if the first non-matching character in s1 is lower than that of s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
