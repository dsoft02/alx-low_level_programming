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

/**
 * print_all - prints all
 * @format: format string that says arg types
 *
 */
void print_all(const char * const format, ...);

/**
 * print_c - prints char
 * @a: list to give
 * Return: always 0
 */
int print_c(va_list a);

/**
 * print_i - prints int
 * @a: list to give
 * Return: always 0
 */
int print_i(va_list a);

/**
 * print_f - prints float
 * @a: list to give
 * Return: always 0
 */
int print_f(va_list a);

/**
 * print_s - prints string
 * @a: list to give
 * Return: always 0
 */
int print_s(va_list a);

typedef struct op
{
	char *c;
	int (*f)(va_list a);
} printer;
#endif
