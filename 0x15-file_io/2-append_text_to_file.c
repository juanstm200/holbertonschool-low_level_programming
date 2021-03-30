#include "holberton.h"

/**
 * append_text_to_file - write in the file dont create
 * @filename: name from file
 * @text_content: string to write in the file
 * Return: 1 or -1 is have error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int writeFile, i, wnum;

	if (filename == NULL)
		return (-1);

	writeFile = open(filename, O_WRONLY | O_APPEND, 0600);

	if (writeFile == -1)
		return (-1);

	if (text_content != NULL)
		for (i = 0; text_content[i]; i++)
		{}

	wnum = write(writeFile, text_content, i);

	if (wnum == -1)
		return (-1);

	close(writeFile);
	return (1);
}
