#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: pointer to Head pointer
 *
 * Return: Head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int popped;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	popped = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (popped);
}
