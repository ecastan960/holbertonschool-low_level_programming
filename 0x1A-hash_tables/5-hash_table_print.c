#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print -  Function to print hash table
 * @ht: Hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long i = 0;
	int flag = 0;
	hash_node_t *tmp;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (tmp->key != NULL && flag == 0)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				flag = 1;
			}
			if (tmp->key != NULL && flag == 1)
			{
				printf(", '%s': '%s'", tmp->key, tmp->value);
			}
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
