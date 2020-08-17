#!/usr/bin/python
# coding=utf-8
from collections import deque
queue =deque(["Eric","John","Micheal"])
queue.append("Terry")
queue.append("Graham")
print(queue.popleft())
print(queue.popleft())
print(queue)

