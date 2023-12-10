#!/bin/bash

# Compile all .c files into object files
gcc -c -fPIC *.c

# Create the shared library from the object files
gcc -shared -o liball.so *.o

echo "Dynamic library liball.so created successfully."
