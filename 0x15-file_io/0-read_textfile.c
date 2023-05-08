#include "main.h"

/**
 * read_textfile - reads atext file and prints to POSIX stdout
 * @filename: pointer to the name of the file
 * @letters: number of letters to read and print
 * Return: NULL - 0 if function or filename fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, c, i, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	/* open */

	o = open(filename, O_RDONLY);

	if (o == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	read(o, buffer, letters);
	buffer[letters] = '\0';

	for (i = 0; buffer[i] != '\0'; i += 1)
		c += 1;

	w = close(o);
	if (w != 0)
		exit(-1);
	w = write(STDOUT_FILENO, buffer, c);
	if (w != c)
		return (0);
	free(buffer);

	return (c);
}
