import sys
from collections import deque

for _ in range(int(sys.stdin.readline())) :
    N, M = map(int, sys.stdin.readline().split())
    queue = deque(list(map(int, sys.stdin.readline().split())))
    result = 1
    while True :
        if queue[0] < max(queue) :
            queue.append(queue.popleft())
            M -= 1
            if(M < 0) :
                M = len(queue) - 1
        else :
            if M == 0 :
                print(result)
                break
            queue.popleft()
            M -= 1 
            result+= 1
        
                


