#include "lists.h"



/**
 * free_list- prints a string as integer
 *
 * @head: head
 *
 * Return: contador_fi
 */


void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
