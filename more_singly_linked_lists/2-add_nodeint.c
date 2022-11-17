#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list_t list
 * @head: Address of header pointer (pointer to head pointer)
 * @n: Integer element for the new node
 *
 * Return: Address of the new element, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *newNode;

	temp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = temp;
	*head = newNode;

	return (*head);
}
