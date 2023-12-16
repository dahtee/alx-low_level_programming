#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -c liball.so *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
