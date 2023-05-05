#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns values of bit at index
 * @n: long integer
 * @index: indez starting from 0 of bit
 * Return: value of bit at index or -1 if there's an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
