#include "main.h"
/**
 * print_number - Print a given integer, digit by digit
 * @n: Number to be printed
 */
void print_number(int n)
{
	int r;
	int d;
	int q;

	r = n / 10;
	d = 1;
	if (n < 0)
	{
		r = -1 * r;
		_putchar('-');
	}
	while (d <= r)
		d *= 10;
	while (d)
	{
		if (n < 0)
			q = -1 * (n / d);
		else
			q = n / d;
		_putchar(q + '0');
		n %= d;
		d /= 10;
	}
}
