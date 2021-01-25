#!/usr/bin/env bash
mkdir -pv build
cd build
cp -r ../media ./
cp -v ../Makefile ./
make clean
make -j$(nproc)
chmod +x main
./main
