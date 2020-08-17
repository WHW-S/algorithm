#!/usr/bin/python
# coding=utf-8
lower=int(input("输入区间最小值："))
upper=int(input("输入区间最大值："))

from math import sqrt
for i in range(lower,upper):
    if i>1:
        for j in range(2,int(sqrt(i)+1)):
            if i%j==0:
                break;
        else:
            print(i)
