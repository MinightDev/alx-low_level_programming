#!/bin/bash
wget -P https://github.com/MinightDev/alx-low_level_programming/raw/master/0x18-dynamic_libraries/liblib.so
export LD_PRELOAD=/tmp/liblib.so
