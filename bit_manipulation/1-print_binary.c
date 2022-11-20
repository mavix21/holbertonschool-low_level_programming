#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Positive number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
		return;

	i = n & 1;
	print_binary(n >> 1);
	putchar(i + '0');
}
