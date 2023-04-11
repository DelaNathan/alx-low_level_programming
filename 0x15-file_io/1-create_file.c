#include "main.h"
#include <stdio.h>

/**
 * creat_file - creates a file
 * @filename: points to name of file to create
 * @text_content: pointer to string to write to file
 * Return: -1 if function fails
 */

int create_file(const char *filename, char *text_content)
{
	int o;
	int w;
	int m = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (m = 0; text_content[m];)
			m++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, m);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
