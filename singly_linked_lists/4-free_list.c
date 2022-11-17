#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Head pointer
 *
 * Return:
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str != NULL)
			free(head->str);
		free(head);
	}
}
