#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table you want to look into
 * @key: key value you are looking for
 *
 * Return: value associated with the element, NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		return ("(null)");
	}
	else
	{
		while (ht->array[index] != NULL)
		{
			if (!strcmp(ht->array[index]->key, key))
			{
				return (ht->array[index]->value);
			}
			ht->array[index] = ht->array[index]->next;
		}
	}

	return (NULL);
}
