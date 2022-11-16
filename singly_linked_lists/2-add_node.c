#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Address of header pointer (pointer to head pointer)
 * @str: String element of the new node
 *
 * Return: Address of the new element, NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
	}
	else
	{
		new->str = NULL;
		new->len = 0;
	}
	new->next = temp;
	*head = new;

	return (*head);
}
