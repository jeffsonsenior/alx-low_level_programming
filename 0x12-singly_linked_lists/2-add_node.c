#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node -add node at the beginning of the linked list.
 * @head: double pointer to the list_t list.
 * @str: add new sring to the nod.
 *
 * Return: the address of the new element.
 *
 * return: return null if fail.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

