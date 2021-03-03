#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Write in console character */
int _putchar(char c);

/*  function that creates an array of chars */
char *create_array(unsigned int size, char c);

/*  function that returns a pointer to a newly allocated space in memory*/
char *_strdup(char *str);

/*  function that concatenates two strings.*/
char *str_concat(char *s1, char *s2);

/*  function that returns a pointer to a 2 dimensional array of integers*/
int **alloc_grid(int width, int height);

/*  function that frees a 2 dimensional grid */
void free_grid(int **grid, int height);

/* function that concatenates all the arguments of your program*/
char *argstostr(int ac, char **av);

#endif
