#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that set value of bit to 1 at given index
 * @n: pointer to number
 * @index: is the index, starting from 0 of bit to set
 * Return: 1 if it works or -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
