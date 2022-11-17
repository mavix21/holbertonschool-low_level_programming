#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: Head pointer to the first node
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int nodeCounter = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeCounter++;
	}

	return (nodeCounter);
}
