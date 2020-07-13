#!/usr/bin/python
# coding=utf-8
a={x for x in 'abradjslfnk' if x not in 'abd'}
print(a)
a.add('wang')#arg elem
a.update({'shao'})#arg set 
print(a)
a.remove('k')
a.discard(0)
print(a)
print("a len is :",len(a))
b=a.copy()
print("id_a=%d id_b=%d"%(id(a),id(b)))

