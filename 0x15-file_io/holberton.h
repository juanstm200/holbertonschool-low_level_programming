#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/* Escriba una función que lea un archivo de texto*/
ssize_t read_textfile(const char *filename, size_t letters);

/* Cree una función que cree un archivo.*/
int create_file(const char *filename, char *text_content);

/* Escriba una función que anexe texto al final de un archivo.*/
int append_text_to_file(const char *filename, char *text_content);


#endif
