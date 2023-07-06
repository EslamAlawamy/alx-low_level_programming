#include "hash_tables.h"
/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	temp = ht->array[index];

	if (temp == NULL)
		return (NULL);

	while (strcmp(key, temp->key) != 0)
		temp = temp->next;

	return (temp->value);
}
