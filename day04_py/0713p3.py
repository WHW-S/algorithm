#!/usr/bin/python
# coding=utf-8
class parent:
    def mymethod(self):
        print('调用父类方法')

class child(parent):
    def mymethod(self):
        print('调用子类方法')

c=child()
c.mymethod()
super(child,c).mymethod()
