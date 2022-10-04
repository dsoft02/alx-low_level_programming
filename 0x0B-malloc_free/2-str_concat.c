#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0;
	int len2 = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	c = malloc(sizeof(char) * (len1 + len2 + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		c[i] = s1[i];
	for (i = 0; i < len2; i++)
		c[i + len1] = s2[i];
	c[i + len1] = '\0';
	return (c);
	free(c);
}
