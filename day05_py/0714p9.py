#!/usr/bin/python
# coding=utf-8
a=float(input("请输入a:"))
b=float(input("请输入b:"))
c=float(input("请输入c:"))

s=(a+b+c)/2

area=(s*(s-a)*(s-b)*(s-c))**0.5
print("三角形面积为{0:.2f}:".format(area))
