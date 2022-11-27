#include "hash_tables.h"

/**
 * free_hlist - frees a hash_node_t list
 * @head: head pointer
 *
 * Return: nothing
 */
void free_hlist(hash_node_t *head)
{
	if (head != NULL)
	{
		free_hlist(head->next);
		free(head->key);
		head->key = NULL;
		free(head->value);
		head->value = NULL;
		free(head);
		head = NULL;
	}
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table you want to delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_hlist(ht->array[i]);
			ht->array[i] = NULL;
		}
	}

	free(ht->array);
	ht->array = NULL;
	free(ht);
}
