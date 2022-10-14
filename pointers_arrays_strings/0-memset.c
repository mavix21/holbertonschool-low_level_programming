#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area pointed by s
 * whit the constant byte b
 * @s: Pointer to the destination buffer
 * @b: Character to be filled
 * @n: Number of bytes to be filled strating from s
 *
 * Return: Pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *begin;

	begin = s;
	while (n--)
		*s++ = b;

	return (begin);
}
