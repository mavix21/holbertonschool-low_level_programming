#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return:
 *	Pointer to a space in memory which contains the concatenated string
 *	NULL, if malloc fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int length1, length2, i, j, k;
	char *buffer;

	if (s1 != NULL)
		length1 = strlen(s1);
	else
		length1 = 0;

	if (s2 != NULL)
		length2 = strlen(s2);
	else
		length2 = 0;

	buffer = (char *) malloc((length1 + length2 + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		buffer[i] = s1[i];

	k = 0;
	for (j = i; j < length1 + length2; j++)
	{
		buffer[j] = s2[k];
		k++;
	}
	return (buffer);
}
