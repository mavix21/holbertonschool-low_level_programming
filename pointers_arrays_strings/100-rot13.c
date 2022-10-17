#include "main.h"
#include <string.h>
/**
 * rot13 - Encodes a string using rot13
 * @s: Pointer pointing to the first element of the String
 *
 * Return: Pointer to encoded char
 */
char *rot13(char *s)
{
	int i;
	int j;
	char alpha[104] = "abcdefghijklmnopqrstuvwxyz";
	char *alphaLow = "abcdefghijklmnopqrstuvwxyz";
	char *alphaUpp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	strcat(alpha, alphaLow);
	strcat(alpha, alphaUpp);
	strcat(alpha, alphaUpp);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] && alpha[j] != s[i]; j++)
		;
		if (alpha[j])
			s[i] = alpha[j + 13];
	}

	return (s);
}
