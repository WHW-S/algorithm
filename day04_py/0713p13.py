#!/usr/bin/python
# coding=utf-8
knights={'gallahad': 'the pure','robin':'the brave'}
for k,v in knights.items():
    print(k,v)

for i,v in enumerate (['tic','tac','toe']):
    print(i,v)

questions =['name','quest','favorite color']
answers=['lancelot','the holy grail','blue']
for q,a in zip(questions,answers):
    print('what is your {0}? It is {1}.'.format(q,a))
