#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc if possible
 * @b: Number of bytes to be allocated
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *buffer;

	buffer = malloc(b);

	if (buffer == NULL)
		exit(98);

	return (buffer);
}
