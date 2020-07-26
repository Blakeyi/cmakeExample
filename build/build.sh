#!/bin/bash
echo "start..."
cd build
cmake ..
make -j8
mv main ../bin/
echo "complete..."
sleep 3