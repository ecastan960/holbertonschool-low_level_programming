#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 *
 * @h: list to print.
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	int c = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		if (temp->n != 0)
			printf("%d", temp->n);
		else
		{
			printf("NULL");
		}
		temp = temp->next;
		c++;
		printf("\n");
	}
	return (c);
}
