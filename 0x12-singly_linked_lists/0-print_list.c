#include "lists.h"
/**
 * print_list - prints a string as integer
 *
 * @h: linked list
 *
 * Return: contador_fi
 */


size_t print_list(const list_t *h)
{
	int c = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str != NULL)
			printf("[%d] %s", temp->len, temp->str);
		else
		{
			printf("[0] (nil)");
		}
		temp = temp->next;
		c++;
		printf("\n");
	}
	return (c);
}
