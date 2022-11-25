#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - Adds up all data (n) of a dlistint_t linked list
 * @head: Head pointer
 *
 * Return: Sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
