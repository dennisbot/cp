#!/bin/bash

args=("$@")
FILE=${args[0]//\\//}
make -f ~/Makefile FILE=$FILE
