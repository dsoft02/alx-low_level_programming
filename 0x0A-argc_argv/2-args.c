#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: always returns 0
 */
int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
