#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a double linked
 * dlistint_t list
 * @h: Head pointer to the first node
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodeCounter = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeCounter++;
	}

	return (nodeCounter);
}
