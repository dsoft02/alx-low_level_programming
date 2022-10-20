#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function to print a list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
