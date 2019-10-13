#include "hash_tables.h"

/**
 * hash_table_set - Hash table.
 * @ht: hash table.
 * @key: key.
 * @value: associated with the key.
 * Return: 1 if it succeeded or 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	hash_node_t *new_node;
	hash_node_t *tmp;

	/** Validations */
	if (key == NULL || ht == NULL || value == NULL || !strcmp(key, ""))
	{
		return (0);
	}
	/** This function returns the idx where node is */
	idx = key_idx(key, ht->size)

		new_node = malloc(sizeof(ht_node));
	if (!new_node)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_node;
	}
	else
	{
		ht->array[idx] = tmp;
		while(tmp != NULL)
		{
			if (!strcmp(key, key))
			{
				free(new_node->value);
				tmp->value = strdup(value);
				return(1);
			}
			tmp->next = tmp;
		}
		new_node->next = ht->array[idx];/**nuevo node apunte al sigiente*/
		ht->array[idx] = new_node;
	}

	return (1);
}
