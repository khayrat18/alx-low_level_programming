#!/bin/bash

for file in *.c; do
	gcc -c -fPIC $file 
done

objects=$(ls *.o)

gcc -shared -o liball.so $objects

rm *.o

