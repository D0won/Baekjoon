import sys
input = sys.stdin.readline

T = int(input())

for _ in range(T) :
    K = int(input())
    N = int(input())
    floor = list(range(1, N+1))    
    for k in range(K) :
        for i, n in enumerate(floor) :
            if i > 0 :
                floor[i] += floor[i-1]


    print(floor[N-1])

    