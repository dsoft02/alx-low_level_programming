#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds functions
 * @a: int a
 * @b: int b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract function
 * @a: int a
 * @b: int b
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication function
 * @a: int a
 * @b: int b
 * Return: multipliy
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division function
 * @a: int a
 * @b: int b
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulos function
 * @a: int a
 * @b: int b
 * Return: modulo of ints
 */

int op_mod(int a, int b)
{
	return (a % b);
}
