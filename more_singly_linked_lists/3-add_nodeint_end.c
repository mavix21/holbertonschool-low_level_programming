#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * new_node - Allocates a new node with given data
 * @n: Integer data to be inserted in the node
 *
 * Return: Pointer to the new node
 */
listint_t *new_node(const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	return (newNode);
}

/**
 * insert_end_recursive - Insert a new node at the end of a listint_t list
 * using recursion
 * @head: Address of head pointer (pointer to head pointer)
 * @n: Numeric element for the new node
 *
 * Return: Nothing
 */
void insert_end_recursive(listint_t **head, const int n)
{
	if (*head == NULL)
	{
		*head = (new_node(n));
		return;
	}
	else
	{
		insert_end_recursive(&(*head)->next, n);
	}
}

/**
 * add_node_end - Adds a new node at the end of a listint_t list
 * @head: Address of header pointer (pointer to head pointer)
 * @n: Numeric element for the new node
 *
 * Return: Address of the new element, NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail;

	insert_end_recursive(head, n);

	tail = *head;

	while (tail->next != NULL)
		tail = tail->next;

	return (tail);
}
