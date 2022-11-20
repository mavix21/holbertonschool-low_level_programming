#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number
 * @index: Index of the bit wanted, starting from 0
 *
 * Return: The value of the bit at index 'index', or -1 if an error
 * ocurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(n))
		return (-1);

	bit = (n & (1 << index)) >> index;
	return (bit);
}
