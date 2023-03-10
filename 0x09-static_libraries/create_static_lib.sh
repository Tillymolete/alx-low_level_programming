#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar rcs liballa.a *.o
