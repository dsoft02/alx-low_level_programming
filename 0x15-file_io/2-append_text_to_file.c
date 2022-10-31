#include "main.h"
/**
 * append_text_to_file - function that appends to file
 * @filename: name of file
 * @text_content: content of text
 * Return: int value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fs, len = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);
	fs = open(filename, O_RDWR | O_APPEND);
	if (fs == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		wrote = write(fs, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	if (close(fs) == -1)
		return (-1);
	return (1);
}
