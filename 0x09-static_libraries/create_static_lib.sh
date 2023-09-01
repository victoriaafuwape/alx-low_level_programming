#!/bin/bash

for file in "/root/alx-low_level_programming/0x09-static_libraries/"*.c
do
    gcc -c "$file"
done
