#include "hash_tables.h"

/**
 * hash_table_delete - deletes table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *destroy;
	unsigned long int x;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}
	for (x = 0; x < ht->size; x++)
	{
		destroy = ht->array[x];
		while (destroy)
		{
			ht->array[x] = destroy->next;
			free(destroy->key);
			free(destroy->value);
			free(destroy);
			destroy = ht->array[x];
		}
	}
	free(ht->array);
	free(ht);
}
