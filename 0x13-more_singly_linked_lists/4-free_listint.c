#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * free_listint- function that frees a list
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
