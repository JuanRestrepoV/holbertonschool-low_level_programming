#include "hash_tables.h"
/**
* hash_table_delete - Deletes a hash table
* @ht: A pointer to the hash table to be deleted
*
* Description:
*   This function frees the memory allocated for the hash table and its element
*   If ht is NULL, the function does nothing.
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
