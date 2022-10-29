#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two string
 * @s1: String 1
 * @s2: String 2
 * @n: Maximum number of bytes used from s2
 *
 * Return: Pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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

	buffer = malloc((length1 + n + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		buffer[i] = s1[i];

	k = 0;
	for (j = i; k < n && j < length1 + length2; j++)
	{
		buffer[j] = s2[k];
		k++;
	}

	buffer[j] = '\0';
	return (buffer);
}
