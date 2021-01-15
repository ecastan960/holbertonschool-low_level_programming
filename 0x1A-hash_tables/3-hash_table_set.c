#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set -  Function inserts a key and a value to the
 * hash table.
 * @ht: Node key
 * @key: size of the array
 * @value: Value in node of key
 *
 * Return: pointer to the newly created hash table.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *copy_v = malloc(sizeof(char));
	char *copy_key = malloc(sizeof(char));
	hash_node_t *tmp;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	if (ht->array == NULL)
		return (0);
	if (ht->size == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	strcpy(copy_v, value);
	strcpy(copy_key, key);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = copy_v;
			return (1);
		}
		tmp = tmp->next;
	}
	new_node->key = copy_key;
	new_node->value = copy_v;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
