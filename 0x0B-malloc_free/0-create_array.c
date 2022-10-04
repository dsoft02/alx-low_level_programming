#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates array of chars
 * @size: size of the array to be created
 * @c: char to initialize with
 * Return: Pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	t = malloc(sizeof(*t) * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
	free(t);
}
