#include "main.h"
/**
 * _isupper - Check if a character is uppercase
 * @c: The character (ascii code) to be checked
 *
 * Return: 1 if the character is uppercase. 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
