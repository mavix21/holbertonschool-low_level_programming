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
listint_t *add_nodeint(listint_t **head, int n)
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

/**
 * new_Node - Allocates a new node with given data
 * @n: Integer data to be inserted in the node
 *
 * Return: Pointer to the new node
 */
listint_t *new_Node(int n)
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
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to head pointer
 * @idx: index
 * @n: Data (n) for the new node
 *
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodeAtIdx;
	listint_t *nodeAtPrevIdx;
	listint_t *newNode;

	if (idx == 0)
		return (add_nodeint(head, n));

	nodeAtIdx = get_nodeint_at_index(*head, idx);
	if (nodeAtIdx == NULL)
		return (NULL);

	nodeAtPrevIdx = get_nodeint_at_index(*head, idx - 1);

	newNode = new_Node(n);
	if (newNode == NULL)
		return (NULL);

	newNode->next = nodeAtIdx;
	nodeAtPrevIdx->next = newNode;

	return (newNode);
}
