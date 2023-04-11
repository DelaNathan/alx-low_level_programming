#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a func to convert a binary number to
 * unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number or 0
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, m;

	m = 0;
	result = 0;
	if (!b)
		return (0);

	while (b[result] != '\0')

	{
		if (b[result] != '0' && b[result] != '1')
			return (0);
		m <<= 1;
		if (b[result] & 1)
			m += 1;
		result += 1;
	}
	return (m);
}
