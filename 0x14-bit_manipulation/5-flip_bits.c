#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns number of bits needed to flip
 * to get from a number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int int_b, i;

	i = 0;
	int_b =  n ^ m;
	for (i = 0; int_b != 0; i += 1)
		int_b &= (int_b - 1);
	return (1);
}
