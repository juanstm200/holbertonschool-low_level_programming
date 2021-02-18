#ifndef HOLBERTON_H
#define HOLBERTON_H

/* writes the character c to stdout*/
int _putchar(char c);

/* a function that concatenates two strings.*/
char *_strcat(char *dest, char *src);

/* a function that concatenates two strings. */
char *_strncat(char *dest, char *src, int n);

/* Write a function that copies a string.*/
char *_strncpy(char *dest, char *src, int n);

/* Write a function that compares two strings.*/
int _strcmp(char *s1, char *s2);

/* function that reverses the content of an array of integers.*/
void reverse_array(int *a, int n);

/*  function that changes all lowercase letters of a string to uppercase.*/
char *string_toupper(char *);

/*  function that capitalizes all words of a string.*/
char *cap_string(char *);

/* function that encodes a string into*/
char *leet(char *);

/* function that encodes a string using*/
char *rot13(char *);

#endif
