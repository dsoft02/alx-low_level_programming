#include "main.h"
#include "2-get_bit.c"
/**
 * set_bit - function that sets a bit
 * @n: pointer to the integers
 * @index: the index of the bit to set
 *
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
