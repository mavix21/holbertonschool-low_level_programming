#include "main.h"
/**
 * print_number - Print a given integer, digit by digit
 * @n: Number to be printed
 */
void print_number(int n)
{
	int r, d, q;

	r = n / 10;
	d = 1;

	if (n < 0)
	{
		_putchar('-');
		r = -1 * r;
	}

	while (d <= r)
		d *= 10;

	while (d)
	{
		q = n / d;
		if (n < 0)
			q *= -1;
		_putchar(q + '0');
		n %= d;
		d /= 10;
	}
}
