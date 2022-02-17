#include "hash_tables.h"

/**
 * hash_table_create - creates hash table obviously
 * @size: size
 * Return: usually NULL or the hashbrown
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashbrown = malloc(sizeof(hash_table_t));

if (hashbrown == NULL)
	return (NULL);
hashbrown->size = size;
hashbrown->array = malloc(sizeof(hash_node_t *) * size);
if (hashbrown == NULL)
	return (NULL);

return (hashbrown);
}
