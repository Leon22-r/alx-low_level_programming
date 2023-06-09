#!/bin/bash
gcc -Werror -Wextra -pedantic -Wall -pedantic -std=gnu89 *.c ||  ar -rc liball.a *.o
