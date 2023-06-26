#!/bin/bash
MACHINE="$(gcc -dumpmachine)"
# echo Building for ${MACHINE}...
mkdir -p "build_${MACHINE}"
cd "build_${MACHINE}"
rm -f *.pak
cmake -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ -GNinja .. > build.log 2>&1
ninja >> build.log 2>&1
cd .. 
