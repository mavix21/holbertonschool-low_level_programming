#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i;
	int j;
	int ij;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			ij = i * j;
			if (ij <= 9)
			{
				_putchar(' ');
				_putchar(ij + '0');
			}
			else
			{
				_putchar(ij / 10 + '0');
				_putchar(ij % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}

