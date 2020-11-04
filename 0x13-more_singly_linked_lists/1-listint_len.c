#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns number of elements
 *
 * @h: linked list
 *
 * Return: contador_fi
 */


size_t listint_len(const listint_t *h)
{
	int c = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		c++;
	}
	return (c);
}
