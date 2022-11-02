#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Print all the attributes of the given structure
 * @d: Dog structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	char *dogs_name;
	char *dogs_owner;

	if (d == NULL)
		return;

	if (d->name == NULL)
		dogs_name = "(nil)";
	else
		dogs_name = d->name;

	if (d->owner == NULL)
		dogs_owner = "(nil)";
	else
		dogs_owner = d->owner;

	printf("Name: %s\n", dogs_name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", dogs_owner);
}
