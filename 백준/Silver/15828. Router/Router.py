from collections import deque
import sys

q = deque()
while True:
    a = int(sys.stdin.readline())
    if a == -1 :
        break
    elif a == 0 :
        q.popleft()
    else :
        q.append(a)

q.popleft()
if(len(q) == 0) :
    print('empty')
else :
    for i in range(len(q)) :
        print(q[i], end=' ')

