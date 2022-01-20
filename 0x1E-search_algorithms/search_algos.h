#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/** Write a function that searches for a value */
int linear_search(int *array, size_t size, int value);
/**  function that searches for a value in a sorted array */
int binary_search(int *array, size_t size, int value);

#endif
