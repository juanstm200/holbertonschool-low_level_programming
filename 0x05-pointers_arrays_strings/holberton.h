#ifndef HOLBERTON_H
#define HOLBERTON_H

/* writes the character c to stdout*/
int _putchar(char c);

/* Not return change number n by oter number int*/
void reset_to_98(int *n);

/* Not return change number a by b */
void swap_int(int *a, int *b);

/* function that returns the length of a string */
int _strlen(char *s);

/*  function that prints a string */
void _puts(char *str);

/* prints a string, in reverse*/
void print_rev(char *s);

/* reverses a string. */
void rev_string(char *s);

/*  prints every other character of a string */
void puts2(char *str);

/* should print the second half of the string */
void puts_half(char *str);

/* prints n elements of an array of integers*/
void print_array(int *a, int n);

/* copies the string pointed to by src*/
char *_strcpy(char *dest, char *src);

#endif
