#!/bin/bash

args=("$@")
FILE=${args[0]//\\//}
WORKSPACE=${args[1]//\\//}
make -f $WORKSPACE/Makefile FILE=$FILE
