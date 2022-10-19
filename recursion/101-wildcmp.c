#include "main.h"
#include <string.h>
/**
 * remove_consecutive_asterisks - Removes consecutive asterisks
 * before the next alphanumeric character in a String
 * @s: String
 *
 * Return: Pointer to string with no consecutive asterisks at the beggining
 */
char *remove_consecutive_asterisks(char *s)
{
	char *p;

	if (*(s + 1) != '*')
		return (s);
	s++;
	p = remove_consecutive_asterisks(s);
	return (p);
}

/**
 * wildcmp - Check if two strings can be considered identical. The's2' string
 * can contain the special character '*', which can replace any string,
 * including an empty string
 * @s1: String 1
 * @s2: String 2
 *
 * Return:
 *	1, If the strings can be considered are identical
 *	0, Otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* We are finished when we reach the end of both strings */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* Remove consecutive asterisks */
	if (*s2 == '*')
		s2 = remove_consecutive_asterisks(s2);

	/* Make sure there are characters after '*' in the first string */
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	/* If current character of both strings are equal */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	/**
	 * If we reach an *, then there are two posibilities
	 * 1) We consider current character of second string
	 * 2) We ignore current character of second string
	 */
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
