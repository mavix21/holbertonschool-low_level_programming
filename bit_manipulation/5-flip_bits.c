#include "main.h"

/**
 * flip_bits - Return the number of bits you would need to flip
 * to get from one number to another
 * @n: Number 1
 * @m: Number 2
 *
 * Return: Number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_cmp;
	unsigned int count = 0;

	bit_cmp = n ^ m;
	for (count = 0; bit_cmp != 0; bit_cmp >>= 1)
	{
		if (bit_cmp & 1)
			count++;
	}

	return (count);
}
