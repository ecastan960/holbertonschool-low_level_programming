#!/bin/bash
gcc *.c -c -fPIC &
wait $!
gcc *.o -shared -o liball.so
