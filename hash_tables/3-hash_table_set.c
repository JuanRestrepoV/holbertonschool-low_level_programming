#include "hash_tables.h"
/**
* custom_key_index - Creates a new hash node with a given key-value pair.
* @key: Pointer to a string representing the key.
* @value: Pointer to a string representing the value associated with the key.
*
* This function allocates memory for a new hash node, copies the provided key
* and value strings, and initializes the node's pointers. Returns a pointer to
* the newly created hash_node_t structure if successful, or NULL on failure.
* Return: hash_node_t type.
*/
hash_node_t *custom_key_index(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}
/**
* hash_table_set - Adds an element to the hash table
* @ht: Pointer to the hash table
* @key: Key string to be added
* @value: Value associated with the key
*
* This function adds an element to the hash table @ht with the provided
* @key and @value. If @key already exists in the hash table, the associated
* @value is updated. If @key doesn't exist, a new key-value pair is added.
*
* Return: 1 on success, 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = custom_key_index(key, value);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	if (ht->array[index] == new_node->key)
	{
		ht->array[index] = new_node;
		return (1);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
