#!/bin/bash
gcc -c 0-isupper.c -o 0-isupper.o
gcc -c 0-strcat.c -o 0-strcat.o
gcc -c 1-isdigit.c -o 1-isdigit.o
gcc -c 1-strncat.c -o 1-strncat.o
gcc -c 2-strlen.c -o 2-strlen.o
gcc -c 3-islower.c -o 3-islower.o
gcc -c 3-strcmp.c -o 3-strcmp.o
gcc -c 4-isalpha.c -o 4-isalpha.o
gcc -c 5-strstr.c -o 5-strstr.o
gcc -c 9-strcpy.c -o 9-strcpy.o
gcc -c _putchar.c -o _putchar.o
ar rc liball.a 0-isupper.o 0-strcat.o 1-isdigit.o 1-strncat.o 2-strlen.o 3-islower.o 3-strcmp.o 4-isalpha.o 5-strstr.o 9-strcpy.o _putchar.o
ranlib liball.a
