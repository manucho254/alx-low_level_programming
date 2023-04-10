#!/bin/bash

# create objects
gcc -c -Wall -Werror -Wextra *.c

# create a library archive

ar rc libmy.a *.o

# update archive index
ranlib libmy.a
