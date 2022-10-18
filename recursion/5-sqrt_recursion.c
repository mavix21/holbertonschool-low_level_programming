#include "main.h"
/**
 * _sqrt_guess - Iterates an expression that converges to the square root
 * of a real number 'n'
 * @n: Number whose natural square root will be evaluated
 * @k: Iterator
 *
 * Return: Square root
 */
int _sqrt_guess(long int k, int n)
{
	long int next_k;

	if (n >= 0)
		next_k = (k + n / k) / 2;
	else
		return (-1);

	if (k * k == n)
		return (k);
	else if (k * k < n && k != 1)
		return (-1);
	else
		return (_sqrt_guess(next_k, n));
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: Number whose natural square root will be evaluated
 *
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_guess(1, n));
}
