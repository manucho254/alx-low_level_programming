#!/bin/bash

# create object files
gcc -Wall -fPIC -c *.c

# create .so file

gcc -shared -Wl,-soname,liball.so -o liball.so *.o
