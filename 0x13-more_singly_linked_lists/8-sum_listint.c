#include "lists.h"

/**
 * sum_listint - sum all the data(n) of a listint_t
 * @head: linked list of type listint to print
 *
 * Return: sum of data (n) or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
