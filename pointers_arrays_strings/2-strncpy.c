#include "main.h"
/**
 * _strncpy - Copies the n first bytes of a string pointed to
 * by src, includinghe terminating null byte, to the buffer pointed to by dest
 * @src: Pointer to the String we want to copy
 * @dest: Pointer to the buffer where src will be allocated
 * @n: Number of bytes to be copied from src
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
