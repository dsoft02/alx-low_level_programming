#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed
 * @argv: double pointer
 * Return: the actual number of letters it could read and print
 */
int main(int argc, char **argv)
{
	int fs1, fs2, n;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fs1 = open(argv[1], O_RDONLY);
	if (fs1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fs2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((n = read(fs1, buf, 1024)) > 0)
	{
		if (write(fs2, buf, n) != n || fs2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fs1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fs1);
		exit(100);
	}
	if (close(fs2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fs2);
		exit(100);
	}
	return (0);
}
