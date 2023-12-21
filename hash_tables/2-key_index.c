#include "hash_tables.h"
/**
* key_index - Calculates an index for a given key
* @key: Pointer to the beginning of the key
* @size: Size of the key in bytes
*
* This function calculates an index for a given key based on its contents
* and size. It returns an unsigned long int value representing the index.
*
* Return: The index calculated from the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
