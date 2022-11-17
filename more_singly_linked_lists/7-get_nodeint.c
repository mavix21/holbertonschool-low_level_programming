#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Head pointer
 * @index: index
 *
 * Return: Pointer to the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	if (head == NULL)
		return (NULL);
	else
		return (head);
}
