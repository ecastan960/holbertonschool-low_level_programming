#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get -  Function inserts a key and a value to the
 * hash table.
 * @ht: Hash table
 * @key: Key
 *
 * Return: value associated with the element,
 *  or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
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
