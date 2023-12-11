#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
