#include "hash_tables.h"

/**
* hash_table_set - sets the table
*
* @ht: The Hash Table
* @key: The Key
* @value: The Value
*
* Return: 1 or 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x = 0;
	hash_node_t *newvalue = NULL, *temp = NULL;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	newvalue = malloc(sizeof(hash_node_t));
	if (newvalue == NULL)
		return (0);
	newvalue->value = (char *) strdup(value);
	newvalue->key = (char *) strdup(key);
	newvalue->next = NULL;
	x = key_index((const unsigned char *)(key), ht->size);
	if (ht->array[x] == NULL)
		ht->array[x] = newvalue;
	else if (strcmp(ht->array[x]->key, key) == 0)
	{
		free(ht->array[x]->value);
		free(ht->array[x]->key);
		free(ht->array[x]);
		ht->array[x] = newvalue;
	}
	else
	{
		temp = ht->array[x];
		newvalue->next = temp;
		ht->array[x] = newvalue;
	}
	return (1);
}
