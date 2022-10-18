#include "main.h"
#include <string.h>
/**
 * is_pal_rec - Recursively checks if a string is a palindome by checking
 * the middle substring
 * @s: Number
 * @posBegin: Position of the first character to compare
 * @posEnd: Position of the last character to compare
 * Return:
 *	1, If the substring is palindrome
 *	0, Otherwise
 */
int is_pal_rec(char *s, int posBegin, int posEnd)
{
	if (posBegin == posEnd)
		return (1);

	if (s[posBegin] != s[posEnd])
		return (0);

	if (posBegin < posEnd - 1)
		return (is_pal_rec(s, posBegin + 1, posEnd - 1));

	return (1);
}

/**
 * is_palindrome - Check if a String of characters is a palindrome
 * @s: String
 *
 * Return:
 *	1, If the string is a palindrome
 *	0, Otherwise
 */
int is_palindrome(char *s)
{
	if (strlen(s) == 0)
		return (1);

	return (is_pal_rec(s, 0, strlen(s) - 1));
}
