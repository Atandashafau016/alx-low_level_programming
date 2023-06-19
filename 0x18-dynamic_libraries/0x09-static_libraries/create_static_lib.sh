#!/bin/bash
emacs create_static_lib.sh /
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
