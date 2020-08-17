#!/usr/bin/python
# coding=utf-8
d=dict([('sape',4139),('guido',4127),('jack',4098)])
print(sorted(d.keys()))
del d["jack"]
print(d)
