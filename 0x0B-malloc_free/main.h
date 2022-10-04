#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * create_array - function that creates array of chars
 * @size: size of the array to be created
 * @c: char to initialize with
 * Return: Pointer to the array
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer to the duplicated string.
 */
char *_strdup(char *str);

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2);


#endif