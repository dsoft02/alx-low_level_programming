#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - function that delete the head node of a list
 * @head: head of the list
 *
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	if (*head == NULL)
		return (n);
	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;

	return (n);

}
