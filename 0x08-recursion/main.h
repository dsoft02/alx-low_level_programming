#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * _puts_recursion - funtion that prints a string
 * @s: string to print
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - funtion that prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s);


/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to check the length
 * Return: length of string s
 */
int _strlen_recursion(char *s);

/**
 * factorial - function that returns the factorial of a number
 * @n: number to get factorial of
 *
 * Return: factorial of n
 */
int factorial(int n);

/**
 * _pow_recursion - function that returns
 * the  value of x raise to the power of y
 * @x: the base number
 * @y: the power
 * Return: returns the value of x raise to power y
 */
int _pow_recursion(int x, int y);


#endif
