#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table you want to print
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *separator;

	separator = "";
	printf("{");
	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				printf("%s", separator);
				while (ht->array[i] != NULL)
				{
					printf("'%s': ", ht->array[i]->key);
					printf("'%s'", ht->array[i]->value);
					if (ht->array[i]->next != NULL)
						printf(", ");
					ht->array[i] = ht->array[i]->next;
				}
				separator = ", ";
			}
		}
	}
	printf("}\n");
}
