#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char tmp;

	while (s[i] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}

}
