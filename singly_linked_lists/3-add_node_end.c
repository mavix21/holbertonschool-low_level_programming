#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Address of header pointer (pointer to head pointer)
 * @str: String element of the new node
 *
 * Return: Address of the new element, NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	if (str != NULL)
	{
		newNode->str = strdup(str);
		newNode->len = strlen(str);
	}
	else
	{
		newNode->str = NULL;
		newNode->len = 0;
	}
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	tail = *head;
	/* Point tail pointer to the last node */
	while (tail->next != NULL)
		tail = tail->next;

	if (tail != newNode)
		tail->next = newNode;

	return (tail);
}
