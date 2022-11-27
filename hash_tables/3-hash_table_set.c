#include "hash_tables.h"

/**
 * add_hnode - Adds a new node at the beginning of a hash_node_t list
 * @h: Address of header pointer (pointer to head pointer)
 * @key: key of the new node
 * @value: value for the new node
 *
 * Return: Address of the new element, NULL otherwise
 */
hash_node_t *add_hnode(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *temp;
	hash_node_t *new_hnode;

	new_hnode = malloc(sizeof(hash_node_t));
	if (new_hnode == NULL)
		return (NULL);

	new_hnode->key = strdup(key);
	new_hnode->value = strdup(value);

	temp = *h;
	new_hnode->next = temp;
	*h = new_hnode;

	return (*h);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: string used to generate hash value
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL && !strcmp(ht->array[index]->key, key))
	{
		ht->array[index]->value = strdup(value);
	}
	else
	{
		add_hnode(&ht->array[index], key, value);
		if (ht->array[index] == NULL)
			return (0);
	}

	return (1);
}
