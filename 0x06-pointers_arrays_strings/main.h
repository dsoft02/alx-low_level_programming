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

/**
 * reverse_array - function that reverses
 * the content of an array of integers
 *
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 * @s: character to make upper
 * Return: return value of upper
 */
char *string_toupper(char *s);

/**
 * _indexOf - returns boolean if special  character
 * @a: character to return
 * Return: true or false
 */
int _indexOf(char a);

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: string
 * Return: the string capitalized
 */
char *cap_string(char *s);




#endif
