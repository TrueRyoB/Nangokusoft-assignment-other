#!/bin/bash
set -e
g++ -g -std=c++17 -Wall -Werror main.cpp vector2.cpp ask.cpp config.cpp -o rotate -fsanitize=address
./rotate $*
