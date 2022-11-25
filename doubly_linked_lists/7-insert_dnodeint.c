#include "lists.h"

/**
 * dnew_Node - Allocates a new node in a double linked list with given data
 * @n: Integer data to be inserted in the node
 *
 * Return: Pointer to the new node
 */
dlistint_t *dnew_Node(const int n)
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
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to head pointer
 * @idx: index
 * @n: Data (n) for the new node
 *
 * Return: Address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int numberOfNodes = 0;
	dlistint_t *nodeAtIdx;
	dlistint_t *newNode;
	dlistint_t *temp;

	temp = *h;
	while (temp != NULL)
	{
		numberOfNodes++;
		temp = temp->next;
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	nodeAtIdx = get_dnodeint_at_index(*h, idx);
	if (nodeAtIdx == NULL)
	{
		if (numberOfNodes == idx)
			return (add_dnodeint_end(h, n));
		else
			return (NULL);
	}

	newNode = dnew_Node(n);
	if (newNode == NULL)
		return (NULL);

	(nodeAtIdx->prev)->next = newNode;
	newNode->prev = nodeAtIdx->prev;
	nodeAtIdx->prev = newNode;
	newNode->next = nodeAtIdx;

	return (newNode);
}
