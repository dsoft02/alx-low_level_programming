#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * reset_to_98 - update a pointer's referenced value to 98
 *
 * @n: the number to be updated
 *
 */
void reset_to_98(int *n);

/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to the first integer to be swapped
 * @b: pointer to the second integer to be swapped
 * @tmp: integer to hold a temporary value for the swap
 */
void swap_int(int *a, int *b);

/**
 * _strlen - function that returns the length of a string
 * @s: string to get length
 *
 * Return: length of the string s
 */
int _strlen(char *s);



#endif
