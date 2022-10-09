#include "main.h"
/**
 * print_number - Print an integer, digit by digit
 * @n: Number to be printed
 */
void print_number(int n)
{
	int i;
	unsigned long int inReverse = 0;

	if (n < 0)
	{
		for (i = n; i != 0 ; i /= 10)
			inReverse = inReverse * 10 - (i % 10);
		_putchar('-');
		while (inReverse != 0)
		{
			_putchar((inReverse % 10) + '0');
			inReverse /= 10;
		}
		if (n % 10 == 0)
			_putchar('0');
	}
	else if (n > 0)
	{
		for (i = n; i != 0 ; i /= 10)
			inReverse = inReverse * 10 + (i % 10);
		while (inReverse != 0)
		{
			_putchar((inReverse % 10) + '0');
			inReverse /= 10;
		}
		if (n % 10 == 0)
			_putchar('0');
	}
	else
	{
		_putchar(n + '0');
	}
}
