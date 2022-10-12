#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src, including
 * the terminating null byte, to the buffer pointed to by dest
 * @src: Pointer to the String we want to copy
 * @dest: Pointer to the buffer where src will be allocated
 *
 */
char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	length = 0;
	while (src[length] != '\0')
		length++;

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}
