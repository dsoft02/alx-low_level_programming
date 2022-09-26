#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set it as
 * @n: number of times to fill
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n);


/**
 * _memcpy - copies from source to dest values in array
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number areas to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);


#endif
