#include "lists.h"

/**
 * lg - finds length of string
 *
 * @str: string
 *
 * Return: contador_fi
 */

int lg(const char *str)
{
	int n = 0, i = 0;

	while (str[i])
		n++, i++;
	return (n);
}

/**
 * add_node - prints a string as integer
 *
 * @head: head
 * @str: string
 *
 * Return: contador_fi
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL || head == NULL || str == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = lg(str);
	new->next = *head;
	*head = new;
	return (*head);
}
