#!/usr/bin/python
# coding=utf-8
num=int(input("请输入一个数字："))
factorial=1

if num<0:
    print("负数没有阶乘")
elif num==0:
    print("阶乘为1")
else:
    for i in range(1,num+1):
        factorial*=i
    print("{}的阶乘为{}".format(num,factorial))

