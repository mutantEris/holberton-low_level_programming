#include "hash_tables.h"

/**
 * hash_table_get - hash table
 * @ht: the hash table
 * @key: key to find
 *
 * Return: the value or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;
	hash_node_t *hashbrowm;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);
	x = key_index((const unsigned char *)key, ht->size);
	for (hashbrowm = ht->array[x]; hashbrowm; hashbrowm = hashbrowm->next)
	{
		if (strcmp(key, hashbrowm->key) == 0)
		{
			return (hashbrowm->value);
		}
	}
	return (NULL);
}
