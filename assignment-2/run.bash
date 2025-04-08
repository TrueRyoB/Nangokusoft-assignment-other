#!/bin/bash
set -e
g++ -g -std=c++17 -Wall -Werror main.cpp vector2.cpp ask.cpp config.cpp -o trueryob -fsanitize=address
./trueryob $*
