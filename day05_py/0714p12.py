#!/usr/bin/python
# coding=utf-8
def is_numbers(s):
    try:
        float(s)
        return True
    except ValueError:
        pass
    try:
        import unicodedata
        unicodedata.numberic(s)
        return True
    except ValueError:
        pass
    return False

s=input("请输入字符串：")
if is_numbers(s):
    print("数字")
else:
    print("非数字")
