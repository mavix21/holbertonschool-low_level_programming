#include "hash_tables.h"

/**
 * key_index - Computes the index of a given key
 * @key: string used to generate hash value
 * @size: size of the array of the hash table
 *
 * Return: Index at which the key/value pair should be stored
 *	in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
