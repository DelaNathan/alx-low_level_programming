#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that set value of a bit to 0 at given index
 * @n: pointer that points to a number
 * @index: is the index starting from 0 of bit you want to set
 * Return: 1 if it works or -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
