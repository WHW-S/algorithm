#!/usr/bin/python
# coding=utf-8
import cmath

a=float(input("请输入a:"))
b=float(input("请输入b:"))
c=float(input("请输入c:"))

d=b**2-4*a*c
sol1=(-b+cmath.sqrt(d))/2*a
sol2=(-b-cmath.sqrt(d))/2*a

print('结果为{0}和{1}'.format(sol1,sol2))
