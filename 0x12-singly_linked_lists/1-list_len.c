#include "lists.h"
/**
 * list_len - prints a string as integer
 *
 * @h: linked list
 *
 * Return: contador_fi
 */


size_t list_len(const list_t *h)
{
	int c = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		c++;
	}
	return (c);
}
