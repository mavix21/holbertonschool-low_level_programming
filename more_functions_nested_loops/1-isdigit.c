#include "main.h"
/**
 * _isdigit - Check if a character is a digit (from 0 to 9)
 * @c: The number to be checked
 *
 * Return: 1 if the character is a digit. 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
