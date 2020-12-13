#include "lists.h"
/**
 * print_dlistint- print data of doubly link list
 * @h: head pointer of list
 *
 * Return: Number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		x++;
	}
	return (x);
}
