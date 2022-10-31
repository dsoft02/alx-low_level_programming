#include "main.h"
/**
 * main - program to copy
 * @ac: argument count
 * @av: array of arguments
 * Return: a value
 */
int main(int ac, char **av)
{
	int fs_from, fs_to, wrote, readed;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fs_from = open(av[1], O_RDONLY);
	if (fs_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fs_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fs_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((readed = read(fs_from, buff, 1024)) > 0)
	{
		wrote = write(fs_to, buff, readed);
		if (wrote == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fs_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fs_from);
		exit(100);
	}
	if (close(fs_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fs_to);
		exit(100);
	}
	return (0);
}
