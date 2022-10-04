#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of program
 * @ac: argument count
 * @av: array of arguments
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int size = 0;
	char *s;
	int i = 0;
	int j = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}

	size += (ac + 1);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
	free(s);
}
