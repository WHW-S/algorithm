#!/usr/bin/python
# coding=utf-8
fi=open("./infile","r")
fo=open("./outfile","a")
str=fi.read()
ret=fo.write(str)
print("写入{0}字节".format(ret))
fi.close()
fo.close()

