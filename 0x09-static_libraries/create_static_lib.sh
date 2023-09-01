#!/bin/bash

for file in "/root/alx-low_level_programming/0x09-static_libraries/"*.c
do
    gcc -Wall -Werror -Wextra -pedantic -c "$file"
done

for file in "/root/alx-low_level_programming/0x09-static_libraries/"*.o
do
    ar rc liball.a "$file"
done
