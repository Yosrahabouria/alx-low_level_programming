#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libell.a *.c
ranlib libell.a
