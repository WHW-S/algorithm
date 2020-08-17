#!/usr/bin/python
# coding=utf-8
def f(s):
    return s[0:1].upper()+s[1:].lower()

l=['jack','tom','edward']
l_n=map(f,l)

print(l)
print(list(l_n))
