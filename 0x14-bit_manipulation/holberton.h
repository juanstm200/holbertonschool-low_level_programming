#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
/*Write a function that converts a binary number to an unsigned int*/
unsigned int binary_to_uint(const char *b);

/*Write a function that prints the binary representation of a number.*/
void print_binary(unsigned long int n);

/*Write a function that returns the value of a bit at a given index*/
int get_bit(unsigned long int n, unsigned int index);

/*Write a function that sets the value of a bit to 1 at a given index.*/
int set_bit(unsigned long int *n, unsigned int index);

/*Write a function that sets the value of a bit to 0 at a given index.*/
int clear_bit(unsigned long int *n, unsigned int index);

/*Write a function that returns the number of bits */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* write char by char */
int _putchar(char c);

#endif
