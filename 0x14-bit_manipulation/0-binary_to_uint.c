#include <stdio.h>
#include "main.h"

/**
 * binary_to_unit - a func to convert to binary number to
 * unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number or 0
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, m;

	m = 0;
	i = 0;
	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		m <<= 1;
		if (b[i] & 1)
			m += 1;
		i += 1;
	}
	return (m);
}
