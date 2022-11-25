#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Address of header pointer (pointer to head pointer)
 * @n: Integer element for the new node
 *
 * Return: Address of the new element, NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	temp = *head;
	*head = newNode;
	newNode->next = temp;
	newNode->prev = NULL;

	return (*head);
}
