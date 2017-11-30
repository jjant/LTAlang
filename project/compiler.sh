#!/usr/bin/env bash

if [ $# -eq 0 ] then
  `echo "You have to provide the program to compile"`
fi

if [ $# -eq 1 ] then
  `echo $1 | ./compiler.out`
fi

if [ $# -eq 2 ] && [$2 == "--optimize"] then
  `echo $1 | ./compiler.out | prepack`
fi
