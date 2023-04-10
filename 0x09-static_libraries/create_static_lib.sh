#!/bin/bash

# create objects
gcc -c -Wall -Werror -Wextra *.c

# create a library archive

ar rc liball.a *.o

# update archive index
ranlib liball.a
