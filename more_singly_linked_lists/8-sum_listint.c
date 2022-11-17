#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - Adds up all data (n) of a listint_t linked list
 * @head: Head pointer
 *
 * Return: Sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
