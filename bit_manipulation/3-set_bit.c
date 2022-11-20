#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the number
 * @index: Index of the bit wanted to be set, starting from 0
 *
 * Return: 1 if it worked, -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
