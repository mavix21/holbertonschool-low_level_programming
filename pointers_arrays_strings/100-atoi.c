#include <stdio.h>
#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: Pointer pointing to the first element of a given string
 *
 * Return: The converted value 
 */
int _atoi(char *s)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;
	int num;
	int sign;

	len = 0;
	while (s[len] != '\0')
		len++;

	sign = 1;
	for (i = 0; s[i] < 48 || s[i] > 57; i++)
	{
		if (s[i] == '-')
			sign *= -1;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = s[i] - 48;
			for (j = i + 1; s[j] >= 48 && s[j] <= 57; j++)
			{
				num = num * 10 + (s[j] - 48);
			}
			return (sign * num);
		}
	}
	return (0);
}
