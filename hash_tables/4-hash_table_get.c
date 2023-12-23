#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a given key from a hash
* table
* @ht: a pointer to the hash table
* @key: the key to search for in the hash table
*
* Description: retrieves a value associated with a given key.
* Return: On success, the value associated with the given key.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
