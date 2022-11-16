#include <stdio.h>
#include "lists.h"
/**
 * list_len - Returns the number of elements in a single list
 * of type list_t
 * @h: Head pointer to the first node
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	int nodeCounter = 0;

	if (h == NULL)
		return (nodeCounter);

	nodeCounter++;
	while (h->next != NULL)
	{
		h = h->next;
		nodeCounter++;
	}

	return (nodeCounter);
}
