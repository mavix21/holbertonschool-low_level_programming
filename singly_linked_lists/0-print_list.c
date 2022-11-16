#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a list of type list_t
 * @h: Head pointer to the first node
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodeCounter = 0;

	if (h == NULL)
		return (nodeCounter);

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	nodeCounter++;
	while (h->next != NULL)
	{
		h = h->next;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		nodeCounter++;
	}

	return (nodeCounter);
}
