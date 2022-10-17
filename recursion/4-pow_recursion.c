#include "main.h"
/**
 * _pow_recursion - Calculates the value of 'x' raised to the power of 'y'
 * @x: Base
 * @y: Exponent
 *
 * Return: Power
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y > 0)
		res = x * _pow_recursion(x, y - 1);
	else if (y == 0)
		res = 1;
	else
		res = -1;

	return (res);
}
