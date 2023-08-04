#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
ar -rc libell.a *.c
ranlib libell.a
