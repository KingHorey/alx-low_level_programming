#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
nm -D liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
gcc -L . 0-main.c -l all -o example
