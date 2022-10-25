#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - function to free the list
 * @head: the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
