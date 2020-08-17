#!/usr/bin/python
# coding=utf-8
import sys

list=[1,2,3,4]
it=iter(list)

while True:
    try:
        print(next(it))
    except StopIteration:
        sys.exit()
