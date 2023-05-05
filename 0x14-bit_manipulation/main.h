#ifndef MAIN_H
#define MAIN_H
#include <math.h>
#include <string.h>
int _putchar(char c);
unsigned int binary_to_unit(const char *b);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);

#endif
