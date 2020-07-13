#!/usr/bin/python
# coding=utf-8
intab="123456789"
outtab="abcdefghi"
transtab=str.maketrans(intab,outtab)
str="89 4465794"
print(str.translate(transtab))
