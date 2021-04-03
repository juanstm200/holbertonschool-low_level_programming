#include "holberton.h"

int main(int ac, char *av[])
{
	int filed1 = 0, filed2 = 0, br = 1024, bw;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filed1 = open(av[1], O_RDONLY);
	filed2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	buffer = malloc(sizeof(char) * 1024);
	while (br)
	{
		br = read(filed1, buffer, 1024);
		if (br == -1 || filed1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		bw = write(filed2, buffer, br);
		if (filed2 == -1 || bw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	free(buffer);
	if (close(filed1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filed1);
		exit(100);
	}
	if (close(filed2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filed2);
		exit(100);
	}
	return (0);
}
