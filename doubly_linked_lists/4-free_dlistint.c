#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Head pointer
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
