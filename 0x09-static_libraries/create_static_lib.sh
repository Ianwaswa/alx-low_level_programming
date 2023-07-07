#!/bin/bash
gcc -Wall -Wextra -Werroe -pedantic -c *.c
ar rc liball.a *.o
