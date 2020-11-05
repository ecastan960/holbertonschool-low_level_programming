#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * sum_listint - function that returns the nth node of a listint_t LL
 *
 * @head: head
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
