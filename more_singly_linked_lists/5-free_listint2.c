#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Head pointer
 *
 * Return:
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL
 * @head: Pointer to Head pointer
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
