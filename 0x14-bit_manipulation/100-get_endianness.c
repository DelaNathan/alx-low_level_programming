#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function that checks endianness
 * Returns: 0 if big endianness, 1 if small endianness
 */

int get_endianness(void)
{
	int n;

	n = 2;

	if (n & 1)
		return (0);
	else
		return (1);
}
