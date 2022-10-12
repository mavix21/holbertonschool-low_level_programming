#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: String
 *
 */
void rev_string(char *s)
{
	int i;
	int length;
	char *begin;
	char *end;
	char ch;

	/* Size of s */
	length = 0;
	while (s[length] != '\0')
		length++;

	/* begin and end pointers point to start of string */
	begin = s;
	end = s;

	/* end pointer points to the last character */
	for (i = 0; i < length - 1; i++)
		end++;

	/* Swap the char from start and end index using begin and end pointers */
	for (i = 0; i < length / 2; i++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;
		begin++;
		end--;
	}
}
