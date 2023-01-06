#!/bin/bash
gcc -Wall -Wextra -Werror -c *.c
ar -rc liball.a *.o
ranlib liball.a
