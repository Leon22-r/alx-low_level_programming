#ifndef MAIN_H
#define MAIN_H
/*header files*/
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <errno.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);


#endif