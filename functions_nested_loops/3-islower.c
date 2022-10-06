#include "main.h"
/**
 * _islower - Check if a character is lowercase
 * @c: The character (ascii code) to be checked
 *
 * Return: 1 if the character is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
