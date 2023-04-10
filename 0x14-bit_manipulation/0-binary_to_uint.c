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
	unsigned int result = 0;
	int len = strlen(b);
	int index = len - 1;
	int m = 0;

	while (index >= 0)


	{
		if (b[index] == '1')
		{
			result += pow(2, m);
		}
		m++;
		index--;
	}
	return (result);
}

int main(void)
{
	char *binary = "1101101";
	unsigned int d = binary_to_uint(binary);

	printf("%d\n", d);
	return (0);
}
