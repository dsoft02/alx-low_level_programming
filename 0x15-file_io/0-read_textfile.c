#include "main.h"
/**
 * read_textfile - function to reads a textfile
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: printed letters count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fs, printed, wrote;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fs = open(filename, O_RDWR);
	if (fs == -1)
		return (0);
	printed = read(fs, buff, letters);
	if (printed == -1)
		return (0);
	wrote = write(STDOUT_FILENO, buff, printed);
	if (wrote == -1)
		return (0);
	if (close(fs) == -1)
		return (0);
	free(buff);
	return (printed);
}
