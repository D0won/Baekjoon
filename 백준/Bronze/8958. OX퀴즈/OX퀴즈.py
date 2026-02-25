import sys
input = sys.stdin.readline
T = int(input())

for _ in range(T) :
    sum = 0
    j = 0 
    ox = list(input().strip())
    for i in range(len(ox)):
        if ox[i] == 'O' :
            j += 1
        else :
            j = 0
        sum += j
    print(sum)
           
    

    