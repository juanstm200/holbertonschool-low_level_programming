#ifndef VARIADIC_H
#define VARIADIC_H

/* Write a function that returns the sum of all its parameters*/
int sum_them_all(const unsigned int n, ...);

/*Write a function that prints numbers, followed by a new line.*/
void print_numbers(const char *separator, const unsigned int n, ...);

/* function that prints strings, followed by a new line. */
void print_strings(const char *separator, const unsigned int n, ...);

/* function that prints anything.*/
void print_all(const char * const format, ...);

#endif
