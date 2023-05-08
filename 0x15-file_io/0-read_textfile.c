#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads atext file and prints to POSIX stdout
 * @filename: pointer to the name of the file
 * @letters: number of letters to read and print
 * Return: NULL - 0 if function or filename fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t c;
	ssize_t o;
	ssize_t w;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	o = open(filename, O_RDONLY);
	c = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, c);
	if (o == -1 || c == -1 || w == -1 || w != c)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(0);

	return (w);
}
