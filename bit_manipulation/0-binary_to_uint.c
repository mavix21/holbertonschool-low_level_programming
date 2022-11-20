#include "main.h"

/**
 * is_binary - Checks if there are only binary digits (0 or 1)
 * in a given string
 * @str: Char Pointer pointing to a string
 *
 * Return: 1, if the string contains only 0 and 1 chars. 0 otherwise
 */
int is_binary(const char *str)
{
	if (str == NULL)
		return (0);

	for (; *str != '\0'; str++)
	{
		if (*str != '0' && *str != '1')
			return (0);
	}

	return (1);
}


/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Char Pointer pointing to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if there is one ore more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL || !is_binary(b))
		return (0);

	result = 0;
	for (; *b != '\0'; b++)
	{
		if (*b == '0')
			result <<= 1;
		else
			result = (result << 1) | 1;
	}

	return (result);
}
