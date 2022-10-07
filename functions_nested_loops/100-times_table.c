#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: Number of times the table will be printed
 */
void print_times_table(int n)
{
	int i;
	int j;
	int ij;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				ij = i * j;
				if (ij > 99)
					_putchar(ij / 100 + '0');
				else if (j != 0)
					_putchar(' ');

				if (ij > 9)
					_putchar(((ij / 10) % 10) + '0');
				else if (j != 0)
					_putchar(' ');

				_putchar(ij % 10 + '0');

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar(10);
		}
	}
}

