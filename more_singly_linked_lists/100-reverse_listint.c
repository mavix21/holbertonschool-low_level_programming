#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to head pointer
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextNode;
	listint_t *prevNode;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	prevNode = NULL;
	nextNode = (*head)->next;
	while (*head != NULL)
	{
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
		if (nextNode != NULL)
			nextNode = nextNode->next;
	}
	*head = prevNode;
	return (*head);
}
