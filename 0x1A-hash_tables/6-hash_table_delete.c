#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_delete -  Function to delete a hash table
 * @ht: Hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long i = 0;
	hash_node_t *tmp;
	hash_node_t *prev;

	if (ht == NULL)
	{
		return;
	}

	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (tmp->key != NULL)
			{
				prev = tmp;
				tmp = tmp->next;
				free(prev);
			}
		}
		i++;
	}
	free(ht);
}
