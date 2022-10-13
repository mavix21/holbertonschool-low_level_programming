#include "main.h"
/**
 * _strcat - Concatenates two string
 * @src: Pointer to the String that will be appended
 * @dest: Pointer to the String where src will be appended to
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len1;

	len1 = 0;
	while (dest[len1] != '\0')
		len1++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len1] = src[i];
		len1++;
	}

	return (dest);
}
