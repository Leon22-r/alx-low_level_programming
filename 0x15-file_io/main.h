#ifndef MAIN_H
#define MAIN_H
/*header files*/
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/*function prototypes*/
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
size_t _strlen(char *s);


#endif
