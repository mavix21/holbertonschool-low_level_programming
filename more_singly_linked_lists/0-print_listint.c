#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all the elements of a list of type listint_t
 * @h: Head pointer to the first node
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodeCounter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCounter++;
	}

	return (nodeCounter);
}
