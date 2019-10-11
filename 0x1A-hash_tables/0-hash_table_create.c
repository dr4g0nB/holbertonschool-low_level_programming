#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: Pointer to the newly created hash table or NULLL if something wrong.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	hash_node_t **array;

	/** Creates a new table */
	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
	{
		return (NULL);
	}

	/** Indicates the specifications */
	new_hash_table->size = size;

	/** Space for array */
	array = calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
	{
		return (NULL);
	}
	new_hash_table->array = array;

	return (new_hash_table);
}
