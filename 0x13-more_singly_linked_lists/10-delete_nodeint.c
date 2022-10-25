#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete node at given position
 * @head: head of the list
 * @index: index of the node to insert new node
 *
 * Return: 1 if successful, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *_deleted;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	else
	{
		while (n != (index - 1) && tmp != NULL)
		{
			n++;
			tmp = tmp->next;
		}

		if (n != (index - 1))
			return (-1);
		_deleted = tmp->next;
		tmp->next = _deleted->next;
		free(_deleted);
		return (1);
	}

}
