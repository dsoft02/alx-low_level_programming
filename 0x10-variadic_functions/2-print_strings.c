#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that print strings
 * @separator: separator character
 * @n: number of args
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list stringArgs;
	char *strArgs;

	va_start(stringArgs, n);
	for (i = 0; i < n; i++)
	{
		strArgs = va_arg(stringArgs, char *);

		if (i > 0 && separator != NULL)
			printf("%s", separator);
		if (strArgs == NULL)
			printf("(nil)");
		else
		printf("%s", strArgs);
	}
	va_end(stringArgs);
	printf("\n");
}
