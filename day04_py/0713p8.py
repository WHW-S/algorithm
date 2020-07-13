#!/usr/bin/python
# coding=utf-8
def f(a,b,/,c,d,*,e,f):
    print(a,b,c,d,e,f)

f(10,20,21,32,e=2,f=3)#第3，4参数必须一致
