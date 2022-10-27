#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars, and initializes it
 * whit a specific char.
 * @size: Size to be allocated
 * @c: Character which with the array will be filled
 *
 * Return: Pointer to array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;

	buffer = (char *) malloc(size * sizeof(char));

	while (size--)
		buffer[size] = c;

	return (buffer);
}
