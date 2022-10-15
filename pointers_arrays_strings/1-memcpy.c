#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to be copied from src
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *begin;

	begin = dest;
	while (n--)
		*dest++ = *src++;

	return (begin);
}
