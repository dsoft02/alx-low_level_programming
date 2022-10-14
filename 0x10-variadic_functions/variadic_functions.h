#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all args
 * @n: integer to sum
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - function that print numbers
 * @separator: separator character
 * @n: const var
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - function that print strings
 * @separator: separator character
 * @n: number of args
 *
 */
void print_strings(const char *separator, const unsigned int n, ...);


#endif
