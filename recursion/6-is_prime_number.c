#include "main.h"
/**
 * is_divisible_by - Check if 'n' is divisible by 'i'
 * @n: Number
 * @i: Divisor
 *
 * Return:
 *	1, If the input integer is a prime number
 *	0, Otherwise
 */
int is_divisible_by(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}

	if (n % i == 0)
		return (1);

	if (i * i > n)
		return (1);

	return (is_divisible_by(n, i + 1));
}
/**
 * is_prime_number - Check if a number is a prime number
 * @n: Number
 *
 * Return:
 *	1, If the input integer is a prime number
 *	0, Otherwise
 */
int is_prime_number(int n)
{
	return (is_divisible_by(n, 2));
}
