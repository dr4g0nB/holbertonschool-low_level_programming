#include "hash_tables.h"

/**
 * key_index - Gives the index key
 * @key: key.
 * @size: size of the array of the hash table.
 *
 * Return: Index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
