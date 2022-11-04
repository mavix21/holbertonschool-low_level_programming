#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: Name to be printed
 * @f: Pointer to print function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	(*f)(name);
}
