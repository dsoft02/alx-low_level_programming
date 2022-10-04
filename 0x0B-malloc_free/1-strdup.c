#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int i;
	int x = 0;
	char *t;

	if (str == NULL)
		return (NULL);
	while (str[x] != '\0')
		x++;
	t = malloc(sizeof(*str) * x + 1);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		t[i] = str[i];
	return (t);
	free(t);
}
