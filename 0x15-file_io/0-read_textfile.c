#include "holberton.h"

/**
 * read_textfile - read file and count characters
 * @filename: name from file to read
 * @letters: number of characters to read and print
 * Return: 0 if have error or rnum
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rnum, wnum;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	rnum = read(file, buffer, letters);

	close(file);

	wnum = write(STDOUT_FILENO, buffer, rnum);

	if (rnum == wnum)
		return (wnum);

	free(buffer);
	return (0);
}
