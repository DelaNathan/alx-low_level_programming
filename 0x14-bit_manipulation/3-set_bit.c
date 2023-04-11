#include "main.h"
#include <stdio.h>

/**
 * set_bit - a function to set the value of bit to 1 at given index
 * @n: pointer to a number
 * @index: is the index starting from 0 of the bit
 * Return: 1 if it work or -1 if an error occur
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
