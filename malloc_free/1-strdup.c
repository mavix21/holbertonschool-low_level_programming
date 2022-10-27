#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * wich contains a copy of the string given as a parameter.
 * @str: String to be copied
 *
 * Return:
 *	Pointer to array of chars
 *	NULL, if str = NULL or if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int length;
	unsigned int i;
	char *buffer;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length])
		length++;

	buffer = (char *) malloc(length * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	i = 0;
	do {
		buffer[i] = str[i];
		i++;
	} while (i < length);

	return (buffer);
}
