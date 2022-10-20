#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to add to the list
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *f;
	unsigned int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		f = *head;
		while (f->next != NULL)
			f = f->next;
		f->next = new;
		return (new);
	}
}
