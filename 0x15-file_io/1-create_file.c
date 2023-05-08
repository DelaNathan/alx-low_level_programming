#include "main.h"
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: points to name of file to create
 * @text_content: a pointer to string to write to file
 * Return: -1 if function fails
 */

int create_file(const char *filename, char *text_content)
{
	int o;
	int c, w;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
		return (-1);

	if (!text_content)
		return (1);
	c = 0;
	while (text_content[c] != '\0')
		c += 1;

	w = write(o, text_content, c);
	if (w != c)
		return (-1);
	w = close(o);
	if (w == -1)
		exit(-1);

	return (1);
}
