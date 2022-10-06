#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number whose last digit will be computed
 *
 * Return: The last digit of the argument
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -n % 10;
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
