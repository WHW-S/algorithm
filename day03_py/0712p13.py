#!/usr/bin/python
# coding=utf-8
age=int(input("请输入你家狗狗的年龄:"))
print("")
if age<0:
    print("你是在逗我吧！")
elif age==1:
    print("相当于14岁的人。")
elif age==2:
    print("相当22岁的人。")
elif age>2:
    human=22+(age-2)*5
    print("对应人类年龄：",human)

###推出提示
input("点击enter键退出")
