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

/**
 * delete_dnodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to head pointer
 * @index: Position
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodeAtIdx;

	nodeAtIdx = get_dnodeint_at_index(*head, index);
	if (nodeAtIdx == NULL)
		return (-1);

	if (index == 0)
	{
		*head = nodeAtIdx->next;
		if (nodeAtIdx->next != NULL)
			(nodeAtIdx->next)->prev = NULL;
	}
	else
	{
		(nodeAtIdx->prev)->next = nodeAtIdx->next;
		(nodeAtIdx->next)->prev = nodeAtIdx->prev;
	}

	nodeAtIdx->next = NULL;
	nodeAtIdx->prev = NULL;
	free(nodeAtIdx);
	return (1);
}
