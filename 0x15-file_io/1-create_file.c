#include "holberton.h"

/**
 * create_file - create file or write in the file
 * @filename: name from file
 * @text_content: string content, save in the file
 * Return: 1 or -1 in case of error
 */
int create_file(const char *filename, char *text_content)
{
	int createFile;
	int i, wnum = 0;

	if (filename == NULL)
		return (-1);

	createFile = open(filename, O_CREAT | O_WRONLY, 0600);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{}

		wnum = write(createFile, text_content, i);
		printf("\n%d\n", i);

		if (wnum == -1)
			return (-1);
	}

	close(createFile);
	return (1);
}
