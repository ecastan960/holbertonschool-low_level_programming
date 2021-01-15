#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_node_t **h_array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (h_array == NULL)
		return (NULL);
	if (table == NULL)
	{
		free(h_array);
		return (NULL);
	}
	while (i < size)
	{
		h_array[i] = NULL;
		i++;
	}
	table->size = size;
	table->array = h_array;
	return (table);
}
