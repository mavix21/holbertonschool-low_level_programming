#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a variable of type dog_t
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Pointer to the created structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int i, name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (name_len = 0; name[name_len]; name_len++)
	;
	name_len++;
	dog->name = malloc(sizeof(char) * name_len);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (owner_len = 0; owner[owner_len]; owner_len++)
	;
	owner_len++;
	dog->owner = malloc(sizeof(char) * owner_len);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
