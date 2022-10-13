#include "main.h"
/**
 * _strncat - Concatenates two string
 * @src: Pointer to the String that will be appended
 * @dest: Pointer to the String where src will be appended to
 * @n: Maximum number of bytes used from src
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1;

	len1 = 0;
	while (dest[len1] != '\0')
		len1++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1] = src[i];
		len1++;
	}

	return (dest);
}
