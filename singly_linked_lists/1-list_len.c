#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a list of type list_t
 * @h: Head pointer to the first node
 *
 * Return: Number of nodes
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
