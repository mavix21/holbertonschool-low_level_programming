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

/**
 * delete_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to head pointer
 * @index: Position
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodeAtIdx;
	listint_t *nodeAtPrevIdx;

	nodeAtIdx = get_nodeint_at_index(*head, index);
	if (nodeAtIdx == NULL)
		return (-1);

	if (index == 0)
	{
		*head = nodeAtIdx->next;
	}
	else
	{
		nodeAtPrevIdx = get_nodeint_at_index(*head, index - 1);
		nodeAtPrevIdx->next = nodeAtIdx->next;
	}

	nodeAtIdx->next = NULL;
	free(nodeAtIdx);
	return (1);
}
