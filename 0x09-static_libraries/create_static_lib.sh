#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c main.h
ar -rc liball.a *.o
