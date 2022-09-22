#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - function that copies a string.
 * @dest: destination to copy
 * @src: source to copy
 * @n: amount of places to copy
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - function that compares two strings.
 * @s2: second string
 *
 * Return: value of string
 */
int _strcmp(char *s1, char *s2);




#endif
