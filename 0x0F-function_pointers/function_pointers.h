#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* print name */
void print_name(char *name, void (*f)(char *));

/*  function that executes a function given as a parameter on each element*/
void array_iterator(int *array, size_t size, void (*action)(int));

/* Write a function that searches for an integer. */
int int_index(int *array, int size, int (*cmp)(int));

#endif
