#!/usr/bin/python
# coding=utf-8
def fib(n):
    a,b=0,1
    while b<n:
        print(b,end=" ")
        a,b=b,a+b
        print()

def fib2(n):
    result=[]
    a,b=0,1
    while b<n:
        result.apend(b)
        a,b=b,a+b
    return result
