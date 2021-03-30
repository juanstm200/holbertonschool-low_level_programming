#include "holberton.h"

/**
 * create_file - create file or write in the file
 * @filename: name from file
 * @text_content: string content, save in the file
 * Return: 1 or -1 in case of error
 */
int create_file(const char *filename, char *text_content)
{
	int cFile;
	int i, wnum = 0;

	if (filename == NULL)
		return (-1);

	cFile = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0600);

	if (cFile == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
	{}

	wnum = write(cFile, text_content, i);
	close(cFile);

	if (wnum == -1)
		return (-1);

	return (1);
}
