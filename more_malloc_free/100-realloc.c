#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call
 * to malloc: malloc (old_size)
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 *
 * Return: Pointer to the new allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	ptr_new = malloc(new_size);
	if (ptr_new == NULL)
		return (NULL);

	if (new_size < old_size)
		memcpy(ptr_new, ptr, new_size);
	else
		memcpy(ptr_new, ptr, old_size);

	free(ptr);

	return (ptr_new);
}
