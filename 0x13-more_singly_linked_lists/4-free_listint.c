#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * free_list- prints a string as integer
 *
 * @head: head
 *
 * Return: contador_fi
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}