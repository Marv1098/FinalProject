#!/bin/bash
clear
echo "Compiling"
gcc inventory.c location.c misc.c object.c main.c -o main.exe
./main.exe
