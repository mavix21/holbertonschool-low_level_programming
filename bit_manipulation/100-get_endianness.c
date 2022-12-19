#include "main.h"
#include <stdint.h>

/**
 * get_endianness - Checks the endiannes
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int32_t x = 1;
	char *c = (char *)&x;

	if (*c == 1)
		return (1);
	else
		return (0);
}
