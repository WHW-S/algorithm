#!/usr/bin/python
# coding=utf-8
dic1={'user':'runoob','num':[1,2,3]}
dic2=dic1
dic3=dic1.copy()
dic1['user']='root'
dic1['num'].remove(1)

print(dic1)
print(dic2)
print(dic3)
print("id1=%d id2=%d id3=%d"%(id(dic1),id(dic2),id(dic3)))
