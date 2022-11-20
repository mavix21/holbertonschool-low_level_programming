#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the number
 * @index: Index of the bit wanted to be set, starting from 0
 *
 * Return: 1 if it worked, -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & (1 << index))
		*n ^= (1 << index);

	return (1);
}
