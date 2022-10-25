#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert new node at given position
 * @head: head of the list
 * @idx: index of the node to insert new node
 *
 * Return: the node data at the index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (n != (idx - 1) && tmp != NULL)
	{
		n++;
		tmp = tmp->next;
	}

	if (n != (idx - 1) && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx !=0)
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);

}
