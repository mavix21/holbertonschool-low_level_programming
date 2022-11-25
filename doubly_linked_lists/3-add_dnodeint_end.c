#include "lists.h"

/**
 * dnew_node - Allocates a new node in a double linked list with given data
 * @n: Integer data to be inserted in the node
 *
 * Return: Pointer to the new node
 */
dlistint_t *dnew_node(const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	return (newNode);
}

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Address of header pointer (pointer to head pointer)
 * @n: Numeric element for the new node
 *
 * Return: Address of the new element, NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *reader;
	dlistint_t *newNode;

	newNode = dnew_node(n);
	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	reader = *head;
	/* Makes temp point to the last node */
	while (reader != NULL)
	{
		temp = reader;
		reader = reader->next;
	}
	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
