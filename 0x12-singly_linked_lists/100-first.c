#include <stdio.h>

void bmain(void) __attribute__ ((constructor));

/**
 * bmain - prints a sentence before the main
 * function is executed
 */
void bmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
