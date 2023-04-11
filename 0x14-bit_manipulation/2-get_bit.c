#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns vales of bit at index
 * @n: long integer
 * @index: is index starting from 0 of bit
 * Return: value of bit at index or -1 if an error occur
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
