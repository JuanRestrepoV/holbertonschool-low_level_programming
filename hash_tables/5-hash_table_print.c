#include "hash_tables.h"
/**
* hash_table_print - Prints a hash table
* @ht: A pointer to the hash table
*
* Description: Prints the key/value pairs in the order they appear in the array
*              Prints in the format: {'key': 'value', 'key': 'value', ...}
*              If ht is NULL, does not print anything.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned long int i;
	int print = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		new_node = ht->array[i];
		while (new_node != NULL)
		{
			if (print == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", new_node->key, new_node->value);
			print = 1;
			new_node = new_node->next;
		}
	}
	printf("}\n");
}
