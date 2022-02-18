#include "hash_tables.h"

/**
 * hash_table_print - hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	unsigned long int g = 0;
	hash_node_t *hashbrowmg;

	if (!ht)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		for (hashbrowmg = ht->array[x]; hashbrowmg; hashbrowmg = hashbrowmg->next)
		{
			if (g == 1)
				printf(", ");
			printf("'%s': '%s'", hashbrowmg->key, hashbrowmg->value);
			g = 1;
		}
	}
	printf("}\n");
}
