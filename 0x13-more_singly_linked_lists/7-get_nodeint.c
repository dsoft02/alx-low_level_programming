#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that get the node at given index
 * @head: head of the list
 * @index: index of the node to get
 *
 * Return: the node data at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int n = 0;

	tmp = head;
	while (n != index && tmp != NULL)
	{
		n++;
		tmp = tmp->next;
	}

	if (n != index)
		return (NULL);
	return (tmp);

}
