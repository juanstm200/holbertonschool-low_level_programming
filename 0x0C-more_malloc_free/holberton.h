#ifndef HOLBERTON_H
#define HOLBERTON_H

/* function that allocates memory using malloc */
void *malloc_checked(unsigned int b);

/*  function that concatenates two strings. */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* function that allocates memory for an array, using malloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/*  function that creates an array of integers. */
int *array_range(int min, int max);

#endif
