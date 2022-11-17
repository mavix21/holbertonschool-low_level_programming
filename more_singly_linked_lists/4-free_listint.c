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
