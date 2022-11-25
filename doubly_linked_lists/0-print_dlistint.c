#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list of type dlistint_t
 * @h: Head pointer to the first node
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCounter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCounter++;
	}

	return (nodeCounter);
}
