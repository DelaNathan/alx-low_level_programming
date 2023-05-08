#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the file name
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, c;

	if (filename == NULL)

		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	if (!text_content)
		return (1);
	c = 0;
	while (text_content[c])
		c += 1;
	w = write(o, text_content, c);
	if (w == -1)
		return (-1);
	w = close(0);
	if (w == -1)
		return (-1);
	return (1);
}
