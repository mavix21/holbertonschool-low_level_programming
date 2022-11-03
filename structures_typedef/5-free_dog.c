#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Frees dog structure
 * @d: Dog structure
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
