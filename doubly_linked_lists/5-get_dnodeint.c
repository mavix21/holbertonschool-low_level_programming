#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Head pointer
 * @index: index
 *
 * Return: Pointer to the nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	if (head == NULL)
		return (NULL);
	else
		return (head);
}
